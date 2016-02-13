#ifndef color_cmyk_convert_rgb
#define color_cmyk_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename cmyk_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::cmyk< cmyk_tag_name >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::cmyk< cmyk_tag_name > category_left_type;
         typedef ::color::category::rgb<   rgb_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::scalar< category_left_type > scalar_trait_type;

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

           enum
            {
                 cyan_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
             ,magenta_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
             , yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
             ,    key_p  = ::color::place::_internal::key<category_left_type>::position_enum
            };


           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type k = scalar_type(1) - std::max( { r, g, b } );
           scalar_type c = scalar_type(0);
           scalar_type m = scalar_type(0);
           scalar_type y = scalar_type(0);

           if( false == scalar_trait_type::is_small( 1 - k ) )
            {
             c = 1 - r / (1-k);
             m = 1 - g / (1-k);
             y = 1 - b / (1-k);
            }

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( c ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( m ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( y ) );
           container_left_trait_type::template set<3>( left, diverse_type::template process<3>( k ) );
          }
      };

   }
 }

#endif
