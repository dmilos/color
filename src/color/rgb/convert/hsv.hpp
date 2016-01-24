#ifndef color_rgb_convert_hsv
#define color_rgb_convert_hsv

#include "../../_internal/convert.hpp"
#include "../../hsv/hsv.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_hsv2rgb
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

             scalar_type h = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type s = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type v = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             int region  = int( 6 * h );
             scalar_type f = h * 6 - region ;
             scalar_type p = v * (1 - s);
             scalar_type q = v * (1 - f * s);
             scalar_type t = v * (1 - (1 - f) * s);

             scalar_type r;
             scalar_type g;
             scalar_type b;

             switch( region  % 6 )
              {
               case 0: r = v, g = t, b = p; break;
               case 1: r = q, g = v, b = p; break;
               case 2: r = p, g = v, b = t; break;
               case 3: r = p, g = q, b = v; break;
               case 4: r = t, g = p, b = v; break;
               case 5: r = v, g = p, b = q; break;
              }

             container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
             container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
             container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
            }
        };

     }

     template< typename rgb_tag_name, typename hsv_tag_name >
      struct convert
       <
         ::color::category::rgb< rgb_tag_name >
        ,::color::category::hsv<hsv_tag_name>
       >
      : public ::color::_internal::_privateRGB::convert_hsv2rgb
       <
         ::color::category::rgb< rgb_tag_name >
        ,::color::category::hsv<hsv_tag_name>
        >
      {
      };

   }
 }

#endif
