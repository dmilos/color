#ifndef color_tsl_convert_rgb
#define color_tsl_convert_rgb

#include "../category.hpp"
#include "../constant.hpp"
#include "../../rgb/category.hpp"

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../place/place.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename tsl_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::tsl< tsl_tag_name >
       ,::color::category::rgb<rgb_tag_name>
      >
      {
       public:
         typedef ::color::category::tsl< tsl_tag_name > category_left_type;
         typedef ::color::category::rgb<rgb_tag_name>  category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::constant::tsl< category_left_type > tsl_constant_type;

         typedef ::color::_internal::convert< category_left_type, category_right_type > this_type;

         enum
          {
            tint_p       = ::color::place::_internal::tint<category_left_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
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
           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p       >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p     >( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<lightness_p >( right ) );

           scalar_type summae =  r+g+b ; 
           scalar_type rp = r/summae - scalar_type(1)/scalar_type(3);
           scalar_type gp = g/summae - scalar_type(1)/scalar_type(3);
           if( fabs( summae ) < tsl_constant_type::small() ) { rp = 0; gp = 0; }

           scalar_type t = scalar_type(0.5) - atan2( gp, rp ) / tsl_constant_type::two_pi();
           scalar_type s = sqrt( ( scalar_type(9)/scalar_type(5) )*( rp*rp + gp*gp ) );
           scalar_type l = tsl_constant_type::R() * r + tsl_constant_type::G() * g + tsl_constant_type::B() * b;

           container_left_trait_type::template set<tint_p      >( left, diverse_type::template process<tint_p       >( t ) );
           container_left_trait_type::template set<saturation_p>( left, diverse_type::template process<saturation_p >( s ) );
           container_left_trait_type::template set<lightness_p >( left, diverse_type::template process<lightness_p  >( l ) );
          }
      };

   }
 }

#endif
