#ifndef color_hcg_convert_hsl
#define color_hcg_convert_hsl

#include "../../_internal/convert.hpp"
#include "../../hsl/hsl.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hcg_tag_name, typename hsl_tag_name >
     struct convert
      <
        ::color::category::hcg< hcg_tag_name >
       ,::color::category::hsl< hsl_tag_name >
      >
      {
       public:
         typedef ::color::category::hcg< hcg_tag_name > category_left_type;
         typedef ::color::category::hsl< hsl_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            hl_p = ::color::place::_internal::hue<category_left_type>::position_enum
           ,sl_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,vl_p = ::color::place::_internal::value<category_left_type>::position_enum
          };

         enum
          {
            hr_p = ::color::place::_internal::hue<category_right_type>::position_enum
           ,sr_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           ,lr_p = ::color::place::_internal::lightness<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type h = normalize_type::template  process<hr_p>( container_right_trait_type::template get<hr_p>( right ) );
           scalar_type ss = normalize_type::template process<sr_p>( container_right_trait_type::template get<sr_p>( right ) );
           scalar_type l = normalize_type::template  process<lr_p>( container_right_trait_type::template get<lr_p>( right ) );

           scalar_type c = (1.0 - abs(2.0 * l - 1)) * ss;
           scalar_type g = (l - c / 2.0) / (1.0 - c);
           
           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( h ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( c ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( g ) );
          }
      };

   }
 }

#endif
