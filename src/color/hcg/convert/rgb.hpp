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

         typedef ::color::trait::scalar< hcg_tag_name >       scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            hue_p    = ::color::place::_internal::hue<category_left_type>::position_enum
         //,chroma_p = ::color::place::_internal::chroma<category_left_type>::position_enum
           ,gray_p   = ::color::place::_internal::gray<category_left_type>::position_enum
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
          {
           scalar_type red   = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type green = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type blue  = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );


           const scalar_type min = std::min/*<scalar_type>*/( { red, green, blue } );
           const scalar_type max = std::max/*<scalar_type>*/( { red, green, blue } );
           const scalar_type delta = max - min;

           if( true == scalar_trait_type::is_small( delta ) )
            {
             scalar_type hue    = scalar_type( 0 );
             scalar_type chroma = scalar_type( 0 );
             scalar_type gray   = min;

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( hue    ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( chroma ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( gray   ) );

             return;
           }

           scalar_type hue    ;
           scalar_type chroma = delta;
           scalar_type gray   ;

           if( false == scalar_trait_type::is_small( scalar_type( 1 ) - delta ) )
            {
             gray = min /( scalar_type( 1 ) - delta);
            }
           else
            {
             gray = scalar_type( 1 );
            }

           if( red == max )
            {
             hue = ( green - blue) / delta;
            }else
           if( green == max )
            {
             hue = 2.0 + (blue - red) / delta;
            }else
           if( blue == max )
            {
             hue = 4.0 + (red - green) / delta;
            }

           hue /= scalar_type( 6 );

           if( hue < scalar_type( 0 ) )
            {
             hue += scalar_type( 1 );
            }

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( hue    ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( chroma ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( gray   ) );
          }
      };

   }
 }

#endif
