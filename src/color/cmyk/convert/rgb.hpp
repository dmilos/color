#ifndef color_cmyk_convert_rgb
#define color_cmyk_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/place/place.hpp"
#include "../../rgb/rgb.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
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
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::scalar< category_left_type > scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

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

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type max = std::max<scalar_type>( { r, g, b } );
           scalar_type k = scalar_type(1) - max;
           scalar_type c = scalar_type(0);
           scalar_type m = scalar_type(0);
           scalar_type y = scalar_type(0);

           if( false == scalar_trait_type::is_small( max ) )
            {
             c = scalar_type(1) - r / max;
             m = scalar_type(1) - g / max;
             y = scalar_type(1) - b / max;
            }

           container_left_trait_type::template set<   cyan_p>( left, diverse_type::template process<   cyan_p>( c ) );
           container_left_trait_type::template set<magenta_p>( left, diverse_type::template process<magenta_p>( m ) );
           container_left_trait_type::template set< yellow_p>( left, diverse_type::template process< yellow_p>( y ) );
           container_left_trait_type::template set<    key_p>( left, diverse_type::template process<    key_p>( k ) );
          }
      };

   }
 }

#endif
