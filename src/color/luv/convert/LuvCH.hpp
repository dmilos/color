#ifndef color_luv_convert_LuvCH
#define color_luv_convert_LuvCH

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../LuvCH/LuvCH.hpp"






namespace color
 {
  namespace _internal
   {

    template
     <
       typename luv_tag_name
      ,typename LuvCH_tag_name
     >
     struct convert
      <
        ::color::category::luv< luv_tag_name >
       ,::color::category::LuvCH<  LuvCH_tag_name >
      >
      {
       public:
         typedef ::color::category::luv< luv_tag_name >    luv_category_type, category_left_type;
         typedef ::color::category::LuvCH< LuvCH_tag_name >    LuvCH_category_type, category_right_type;

         typedef typename ::color::trait::scalar< luv_category_type >::instance_type scalar_type;


         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef typename ::color::luv<   scalar_type >::category_type LUVscalar_category_type;
         typedef typename ::color::LuvCH< scalar_type >::category_type LuvCHscalar_category_type;

         typedef ::color::_internal::reformat< category_left_type, LUVscalar_category_type >     reformatUV_type;
         typedef ::color::_internal::reformat< LuvCHscalar_category_type, category_right_type >  reformatCH_type;

         typedef ::color::constant::generic< LUVscalar_category_type > generic_costant_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type l = reformatCH_type::template process< 0, 0 >( container_right_trait_type::template get<0>( right ) );
           scalar_type c = reformatCH_type::template process< 1, 1 >( container_right_trait_type::template get<1>( right ) );
           scalar_type h = reformatCH_type::template process< 2, 2 >( container_right_trait_type::template get<2>( right ) );

           scalar_type u = c * cos( h * generic_costant_type::deg2rad() );
           scalar_type v = c * sin( h * generic_costant_type::deg2rad() );

           container_left_trait_type::template set<0>( left, reformatUV_type::template process< 0, 0 >( l ) );
           container_left_trait_type::template set<1>( left, reformatUV_type::template process< 1, 1 >( u ) );
           container_left_trait_type::template set<2>( left, reformatUV_type::template process< 2, 2 >( v ) );
          }
      };

   }
 }

#endif
