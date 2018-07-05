#ifndef color_rgb_convert_cmyk
#define color_rgb_convert_cmyk

#include "../category.hpp"
#include "../../cmyk/category.hpp"

#include "../../_internal/convert.hpp"
#include "../../cmyk/place/place.hpp"
#include "../../cmyk/cmyk.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../_internal/normalize.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename cmyk_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::cmyk<cmyk_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::cmyk<cmyk_tag_name> category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

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

           enum
            {
              cyan_p    = ::color::place::_internal::cyan<category_right_type>::position_enum
             ,yellow_p  = ::color::place::_internal::yellow<category_right_type>::position_enum
             ,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
             ,key_p     = ::color::place::_internal::key<category_right_type>::position_enum
            };

           scalar_type c = normalize_type::template process<    cyan_p>( container_right_trait_type::template get<    cyan_p>( right ) );
           scalar_type m = normalize_type::template process< magenta_p>( container_right_trait_type::template get< magenta_p>( right ) );
           scalar_type y = normalize_type::template process<  yellow_p>( container_right_trait_type::template get<  yellow_p>( right ) );
           scalar_type k = normalize_type::template process<     key_p>( container_right_trait_type::template get<     key_p>( right ) );

           scalar_type r = (1-c) * (1-k);
           scalar_type g = (1-m) * (1-k);
           scalar_type b = (1-y) * (1-k);

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif
