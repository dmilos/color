#ifndef color_hcg_convert_cmy
#define color_hcg_convert_cmy

#include "../../_internal/convert.hpp"

#include "../../cmy/cmy.hpp"
#include "../../cmy/place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hcg_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::hcg< hcg_tag_name >
       ,::color::category::cmy< cmy_tag_name >
      >
      {
       public:
         typedef ::color::category::hcg< hcg_tag_name > category_left_type;
         typedef ::color::category::cmy< cmy_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            hue_p        = ::color::place::_internal::hue<category_left_type >::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,value_p      = ::color::place::_internal::value<category_left_type>::position_enum
          };

         enum
          {
            cyan_p       = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,magenta_p    = ::color::place::_internal::magenta<category_right_type>::position_enum
           ,yellow_p     = ::color::place::_internal::yellow<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type r = scalar_type(1) - normalize_type::template process<cyan_p   >( container_right_trait_type::template get<cyan_p   >( right ) );
           scalar_type g = scalar_type(1) - normalize_type::template process<magenta_p>( container_right_trait_type::template get<magenta_p >( right ) );
           scalar_type b = scalar_type(1) - normalize_type::template process<yellow_p >( container_right_trait_type::template get<yellow_p>( right ) );

           scalar_type lo = std::min<scalar_type>( {r,g,b} );
           scalar_type v =  std::max<scalar_type>( {r,g,b} );
           scalar_type delta = v - lo;

           scalar_type h = 0;
           scalar_type s = 0;

           if(    ( false == scalar_trait_type::is_small( v ) )
               && ( false == scalar_trait_type::is_small( delta ) ) )
            {
             s = delta / v;

             if( v == r )
              {
               h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
              }
             if( v == g )
              {
               h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
              }

             if( v == b )
              {
               h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
              }
            }

           container_left_trait_type::template set<hue_p       >( left, diverse_type::template process<hue_p       >( h ) );
           container_left_trait_type::template set<saturation_p>( left, diverse_type::template process<saturation_p>( s ) );
           container_left_trait_type::template set<value_p     >( left, diverse_type::template process<value_p     >( v ) );
          }
      };

   }
 }

#endif
