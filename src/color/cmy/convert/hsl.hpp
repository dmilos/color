#ifndef color_cmy_convert_hsl
#define color_cmy_convert_hsl

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../hsl/hsl.hpp"



#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename hsl_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::hsl<hsl_tag_name>
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name > category_left_type;
         typedef ::color::category::hsl<hsl_tag_name>   category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::_internal::convert< category_left_type, category_right_type > this_type;

         enum
          {
               cyan_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           , yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
          };

         enum
          {
                   hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           , lightness_p = ::color::place::_internal::lightness<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type h = normalize_type::template process<       hue_p>( container_right_trait_type::template get<       hue_p>( right ) );
           scalar_type s = normalize_type::template process<saturation_p>( container_right_trait_type::template get<saturation_p>( right ) );
           scalar_type l = normalize_type::template process< lightness_p>( container_right_trait_type::template get< lightness_p>( right ) );

           scalar_type r;
           scalar_type g;
           scalar_type b;

           if ( s == 0 )
            {
             r = l;
             g = l;
             b = l;
            }
           else
            {
             scalar_type q = l < scalar_type(0.5) ? (l * (1 + s)) : ( l + s - l * s );
             scalar_type p = scalar_type(2) * l - q;

             r = this_type::value( p, q, h + ( scalar_type(1) / scalar_type(3) ) + ( scalar_type(2) / scalar_type(3) < h ? -1 :0 ) );
             g = this_type::value( p, q, h );
             b = this_type::value( p, q, h - ( scalar_type(1) / scalar_type(3) ) + ( h < scalar_type(1) / scalar_type(3) ? +1 :0 ) );
            }

           container_left_trait_type::template set<   cyan_p>( left, diverse_type::template process<   cyan_p>( scalar_type(1) - r ) );
           container_left_trait_type::template set<magenta_p>( left, diverse_type::template process<magenta_p>( scalar_type(1) - g ) );
           container_left_trait_type::template set< yellow_p>( left, diverse_type::template process< yellow_p>( scalar_type(1) - b ) );
          }

       private:
         static scalar_type value(  scalar_type const& p, scalar_type const& q, scalar_type const& t )
          {
           if( t < scalar_type(1)/scalar_type(6) ) return ( p + ( q - p ) * scalar_type(6) * t );
           if( t < scalar_type(1)/scalar_type(2) ) return ( q );
           if( t < scalar_type(2)/scalar_type(3) ) return ( p + ( q - p ) * ( ( scalar_type(2)/scalar_type(3) ) - t ) * scalar_type(6) );
           return p ;
         }
      };

   }
 }

#endif
