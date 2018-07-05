#ifndef color_gray_convert_rgb
#define color_gray_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"




namespace color
 {
  namespace _internal
   {

    template< typename gray_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::gray< gray_tag_name >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::gray< gray_tag_name > category_left_type;
         typedef ::color::category::rgb<   rgb_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::constant::gray::rgb< category_left_type > gray_const_type;

         enum
          {
             red_p = ::color::place::_internal::red<category_right_type>::position_enum
           , green_p = ::color::place::_internal::green<category_right_type>::position_enum
           , blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type valueR = normalize_type::template process<red_p  > ( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type valueG = normalize_type::template process<green_p> ( container_right_trait_type::template get<green_p>( right ) );
           scalar_type valueB = normalize_type::template process<blue_p > ( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type value =
                 gray_const_type::Rc() * valueR
               + gray_const_type::Gc() * valueG
               + gray_const_type::Bc() * valueB;

           container_left_trait_type::template set<0>( left,  diverse_type::template process<0>( value ) );
          }
      };

   }
 }

#endif