#ifndef color_rgb_convert_tsl
#define color_rgb_convert_tsl

#include "../../_internal/convert.hpp"

#include "../../tsl/trait/container.hpp"
#include "../../tsl/category.hpp"
#include "../../tsl/constant.hpp"
#include "../../tsl/place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename tsl_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::tsl<tsl_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::tsl<tsl_tag_name> category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_model_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::constant::generic<  category_left_type >  constant_generic_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
          };

         enum
          {
            tint_p       = ::color::place::_internal::tint<category_right_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           ,lightness_p  = ::color::place::_internal::lightness<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_model_type       right
          )
          {
           scalar_type t = normalize_type::template process<tint_p>      ( container_right_trait_type::template get<tint_p>      ( right ) );
           scalar_type s = normalize_type::template process<saturation_p>( container_right_trait_type::template get<saturation_p>( right ) );
           scalar_type l = normalize_type::template process<lightness_p> ( container_right_trait_type::template get<lightness_p> ( right ) );

           scalar_type alpha = constant_generic_type::two_pi() * ( t - 0.25 );

           scalar_type distance = s * sqrt( scalar_type( 5 ) ) / 3;
           scalar_type rp = distance * sin( alpha ); 
           scalar_type gp = distance * cos( alpha ); 

           scalar_type rr = rp + scalar_type(1)/scalar_type(3);
           scalar_type gg = gp + scalar_type(1)/scalar_type(3);

           scalar_type k = l/( 0.185 * rr +  0.473*gg + 0.114 );

           scalar_type r = k * rr;
           scalar_type g = k * gg;
           scalar_type b = k * ( scalar_type(1) - rr - gg );

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif