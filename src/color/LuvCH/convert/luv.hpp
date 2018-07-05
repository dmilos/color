#ifndef color_LuvCH_convert_luv
#define color_LuvCH_convert_luv

#include "../../_internal/convert.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../luv/luv.hpp"






namespace color
 {
  namespace _internal
   {

    template
     <
       typename LuvCH_tag_name
      ,typename luv_tag_name
     >
     struct convert
      <
        ::color::category::LuvCH< LuvCH_tag_name >
       ,::color::category::luv<  luv_tag_name >
      >
      {
       public:
         typedef ::color::category::LuvCH< LuvCH_tag_name >    LuvCH_category_type, category_left_type;
         typedef ::color::category::luv< luv_tag_name >    luv_category_type, category_right_type;

         typedef typename ::color::trait::scalar< LuvCH_category_type >::instance_type scalar_type;


         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef typename ::color::LuvCH< scalar_type >::category_type LuvCHscalar_category_type;
         typedef typename ::color::luv<   scalar_type >::category_type LUVscalar_category_type;

         typedef ::color::_internal::reformat< category_left_type, LuvCHscalar_category_type >   reformatCH_type;
         typedef ::color::_internal::reformat< LUVscalar_category_type, category_right_type >    reformatUV_type;

         typedef ::color::constant::generic< LUVscalar_category_type > generic_costant_type;

         enum
          {
            lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
           ,chroma_p     = ::color::place::_internal::chroma<category_left_type>::position_enum
           ,hue_p        = ::color::place::_internal::hue<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type l = reformatUV_type::template process< 0, 0 >( container_right_trait_type::template get<0>( right ) );
           scalar_type u = reformatUV_type::template process< 1, 1 >( container_right_trait_type::template get<1>( right ) );
           scalar_type v = reformatUV_type::template process< 2, 2 >( container_right_trait_type::template get<2>( right ) );

           scalar_type c = sqrt( u*u + v*v );
           scalar_type h = atan2( v, u ) * generic_costant_type::rad2deg();
           if( h < 0 ) h += 360;

           container_left_trait_type::template set<0>( left, reformatCH_type::template process< lightness_p, 0 >( l ) );
           container_left_trait_type::template set<1>( left, reformatCH_type::template process< chroma_p,    1 >( c ) );
           container_left_trait_type::template set<2>( left, reformatCH_type::template process< hue_p,       2 >( h ) );
          }
      };

   }
 }

#endif
