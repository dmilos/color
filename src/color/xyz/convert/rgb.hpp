#ifndef color_xyz_convert_rgb
#define color_xyz_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

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
              red_p   = ::color::place::_internal::red<category_right_type>::position_enum
             ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
             ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
            };

           static scalar_type mc = 0.17697;
           static scalar_type b11 = 0.49000/mc, b12 = 0.31000/mc, b13 = 0.20000/mc;
           static scalar_type b21 = 0.17697/mc, b22 = 0.81240/mc, b23 = 0.01063/mc;
           static scalar_type b31 = 0.00000/mc, b32 = 0.01000/mc, b33 = 0.99000/mc;

           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( b11 * r + b12 * g + b13 * b ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( b21 * r + b22 * g + b23 * b ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b31 * r + b32 * g + b33 * b ) );
          }
      };

   }
 }

#endif
