#ifndef color_rgb_convert_xyz
#define color_rgb_convert_xyz

#include "../../_internal/convert.hpp"

#include "../../xyz/trait/container.hpp"
#include "../../xyz/category.hpp"
#include "../../xyz/constant.hpp"
#include "../../xyz/place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename xyz_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::xyz<xyz_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::xyz<xyz_tag_name> category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::constant::xyz< category_right_type > xyz_const_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const scalar_type a11 = xyz_const_type::Mi11(), a12 = xyz_const_type::Mi12(), a13 = xyz_const_type::Mi13();
           static const scalar_type a21 = xyz_const_type::Mi21(), a22 = xyz_const_type::Mi22(), a23 = xyz_const_type::Mi23();
           static const scalar_type a31 = xyz_const_type::Mi31(), a32 = xyz_const_type::Mi32(), a33 = xyz_const_type::Mi33();

           scalar_type x = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           scalar_type r = a11 * x + a12 * y + a13 * z;
           scalar_type g = a21 * x + a22 * y + a23 * z;
           scalar_type b = a31 * x + a32 * y + a33 * z;

           if ( r > 0.0031308 ) r = 1.055 * ( pow( r, ( 1 / 2.4 ) ) ) - 0.055;
           else                     r = 12.92 * r;
           if ( g > 0.0031308 ) g = 1.055 * ( pow( g , ( 1 / 2.4 ) ) ) - 0.055;
           else                     g = 12.92 * g;
           if ( b > 0.0031308 ) b = 1.055 * ( pow( b, ( 1 / 2.4 ) ) )  - 0.055;
           else                     b = 12.92 * b;

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif