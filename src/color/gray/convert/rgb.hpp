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
    namespace  _privateGray
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_rgb2gray
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef  ::color::constant::gray< category_left_name > gray_const_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             scalar_name value =
                   gray_const_type::Rc() * normalize_type::template process<0> ( container_right_trait_type::template get<0>( right ) )
                 + gray_const_type::Gc() * normalize_type::template process<1> ( container_right_trait_type::template get<1>( right ) )
                 + gray_const_type::Bc() * normalize_type::template process<2> ( container_right_trait_type::template get<2>( right ) );

             container_left_trait_type::template set<0>( left,  diverse_type::template process<0>( value ) );
           }
        };

     }

     template< typename gray_tag_name, typename rgb_tag_name >
      struct convert
       <
         ::color::category::gray< gray_tag_name >
        ,::color::category::rgb<rgb_tag_name>
       >
      : public ::color::_internal::_privateGray::convert_rgb2gray
       <
         ::color::category::gray< gray_tag_name >
        ,::color::category::rgb<rgb_tag_name>
        >
      {
      };

   }
 }

#endif