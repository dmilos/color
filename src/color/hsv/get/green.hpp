#ifndef color_hsv_get_green
#define color_hsv_get_green

// ::color::get::green( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/hsv.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::hsv<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hsv<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        enum
         {
           red_p        = ::color::place::_internal::red<akin_type>::position_enum
          ,green_p      = ::color::place::_internal::green<akin_type>::position_enum
          ,blue_p       = ::color::place::_internal::blue<akin_type>::position_enum
         };

        enum
         { 
           hue_p        = ::color::place::_internal::hue<category_type>::position_enum
          ,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
          ,value_p      = ::color::place::_internal::value<category_type>::position_enum
         };

         
        scalar_type h = normalize_type::template process<hue_p       >( color_parameter.template get<hue_p       >() );
        scalar_type s = normalize_type::template process<saturation_p>( color_parameter.template get<saturation_p>() );
        scalar_type v = normalize_type::template process<value_p     >( color_parameter.template get<value_p     >() );

        int region  = int( 6 * h );
        scalar_type f = h * 6 - region ;
        scalar_type p = v * (1 - s);
        scalar_type q = v * (1 - f * s);
        scalar_type t = v * (1 - (1 - f) * s);


        scalar_type g;


        switch( region  % 6 )
         {
          case 0:        g = t;        break;
          case 1:        g = v;        break;
          case 2:        g = v;        break;
          case 3:        g = q;        break;
          case 4:        g = p;        break;
          case 5:        g = p;        break;
         }

        return diverse_type::template process<green_p>( g );
       }

    }
  }

#endif
