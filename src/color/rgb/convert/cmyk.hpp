#ifndef color_rgb_convert_cmyk
#define color_rgb_convert_cmyk

#include "../../_internal/convert.hpp"
#include "../../cmyk/cmyk.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_cmyk2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             enum
              {
                red_p   = ::color::place::_internal::red<category_left_type>::position_enum
               ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
               ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
              };

             scalar_type c = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type m = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type y = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );
             scalar_type k = normalize_type::template process<3>( container_right_trait_type::template get<3>( right ) );

             scalar_type r = (1-c) * (1-k);
             scalar_type g = (1-m) * (1-k);
             scalar_type b = (1-y) * (1-k);

             container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
             container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
             container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
            }
        };

     }

     template< typename rgb_tag_name, typename cmyk_tag_name >
      struct convert
       <
         ::color::category::rgb< rgb_tag_name >
        ,::color::category::cmyk<cmyk_tag_name>
       >
      : public ::color::_internal::_privateRGB::convert_cmyk2rgb
       <
         ::color::category::rgb< rgb_tag_name >
        ,::color::category::cmyk<cmyk_tag_name>
        >
      {
      };

   }
 }

#endif