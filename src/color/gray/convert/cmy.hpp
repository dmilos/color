#ifndef color_gray_convert_cmy
#define color_gray_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename gray_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::gray< gray_tag_name >
       ,::color::category::cmy<cmy_tag_name>
      >
      {
       public:
         typedef ::color::category::gray< gray_tag_name > category_left_type;
         typedef ::color::category::cmy<cmy_tag_name>     category_right_type;
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
               cyan_p   = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,magenta_p   = ::color::place::_internal::magenta<category_right_type>::position_enum
           , yellow_p   = ::color::place::_internal::yellow<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type value =
                 gray_const_type::Rc() * ( 1 - normalize_type::template process<   cyan_p> ( container_right_trait_type::template get<   cyan_p>( right ) ) )
               + gray_const_type::Gc() * ( 1 - normalize_type::template process<magenta_p> ( container_right_trait_type::template get<magenta_p>( right ) ) )
               + gray_const_type::Bc() * ( 1 - normalize_type::template process< yellow_p> ( container_right_trait_type::template get< yellow_p>( right ) ) );

           container_left_trait_type::template set<0>( left,  diverse_type::template process<0>( value ) );
          }
      };

   }
 }

#endif
