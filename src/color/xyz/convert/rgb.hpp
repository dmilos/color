#ifndef color_xyz_convert_rgb
#define color_xyz_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/trait/container.hpp"
#include "../../rgb/category.hpp"
#include "../../rgb/place/place.hpp"

#include "../place/place.hpp"
#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename xyz_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::xyz<  xyz_tag_name >
       ,::color::category::rgb<  rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz<  xyz_tag_name > category_left_type;
         typedef ::color::category::rgb<  rgb_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::constant::xyz< category_left_type > xyz_const_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
                  luma_p  = ::color::place::_internal::luma<category_left_type>::position_enum
           ,   inphase_p  = ::color::place::_internal::inphase<category_left_type>::position_enum
           ,quadrature_p  = ::color::place::_internal::quadrature<category_left_type>::position_enum
          };

         enum
          {
            red_p   = ::color::place::_internal::red<category_right_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          { // //Observer. = 2°, Illuminant = D65

           static const scalar_type b11 = xyz_const_type::b11(), b12 = xyz_const_type::b12(), b13 = xyz_const_type::b13();
           static const scalar_type b21 = xyz_const_type::b21(), b22 = xyz_const_type::b22(), b23 = xyz_const_type::b23();
           static const scalar_type b31 = xyz_const_type::b31(), b32 = xyz_const_type::b32(), b33 = xyz_const_type::b33();

           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           if ( r > 0.04045 ) r = pow( ( ( r + 0.055 ) / 1.055 ), 2.4 );
           else                   r = r / 12.92;
           if ( g > 0.04045 ) g = pow((  ( g + 0.055 ) / 1.055 ), 2.4 );
           else                   g = g / 12.92;
           if ( b > 0.04045 ) b = pow(( ( b + 0.055 ) / 1.055 ), 2.4 );
           else                   b = b / 12.92;

           scalar_type x = b11 * r + b12 * g + b13 * b;
           scalar_type y = b21 * r + b22 * g + b23 * b;
           scalar_type z = b31 * r + b32 * g + b33 * b;

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( x ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( y ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( z ) );
          }
      };

   }
 }

#endif
