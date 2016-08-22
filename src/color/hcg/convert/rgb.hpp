#ifndef color_hcg_convert_rgb
#define color_hcg_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/category.hpp"
#include "../../rgb/trait/container.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hcg_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::hcg<   hcg_tag_name >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::hcg<   hcg_tag_name > category_left_type;
         typedef ::color::category::rgb<   rgb_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

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
          {
           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type green = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type h = 0; // TODO
           scalar_type c = 0; // TODO
           scalar_type gray = 0; // TODO

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( h ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( c ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( gray ) );
          }
      };

   }
 }

#endif
