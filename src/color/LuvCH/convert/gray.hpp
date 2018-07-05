#ifndef color_LuvCH_convert_gray
#define color_LuvCH_convert_gray

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/reformat.hpp"





namespace color
 {
  namespace _internal
   {

    template
     <
       typename LuvCH_tag_name
      ,typename  gray_tag_name
     >
     struct convert
      <
        ::color::category::LuvCH< LuvCH_tag_name >
       ,::color::category::gray<   gray_tag_name >
      >
      {
       public:
         typedef ::color::category::LuvCH<  LuvCH_tag_name > LuvCH_category_type, category_left_type;
         typedef ::color::category::gray<    gray_tag_name > category_right_type;

         typedef typename ::color::trait::scalar< LuvCH_category_type >::instance_type scalar_type;

         typedef ::color::category::LuvCH< scalar_type > LuvCHSCALAR_category_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;
         typedef ::color::_internal::reformat< category_left_type, LuvCHSCALAR_category_type >    reformatLuvCH_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         enum
          {
            lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
           ,chroma_p     = ::color::place::_internal::chroma<category_left_type>::position_enum
           ,hue_p        = ::color::place::_internal::hue<category_left_type>::position_enum
          };

         enum
          {
            gray_p       = ::color::place::_internal::gray<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<0>( left, reformat_type::template process< lightness_p, 0 >( container_right_trait_type::template get<0>( right ) ) );
           container_left_trait_type::template set<1>( left, reformatLuvCH_type::template process< chroma_p, 1 >( 0 ) );
           container_left_trait_type::template set<2>( left, reformatLuvCH_type::template process< hue_p, 2 >( 0 ) );
          }
      };

   }
 }

#endif
