#ifndef color_hsi_get_red
#define color_hsi_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/hsi.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/constant.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsi<tag_name> >::akin_type >::return_type
      red( ::color::model< ::color::category::hsi<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hsi<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef  ::color::constant::generic< category_type > constant_type;

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
          ,intensity_p  = ::color::place::_internal::intensity<category_type>::position_enum
         };


        scalar_type h = normalize_type::template process<hue_p       >( color_parameter.template get<hue_p       >() );
        scalar_type s = normalize_type::template process<saturation_p>( color_parameter.template get<saturation_p>() );
        scalar_type i = normalize_type::template process<intensity_p >( color_parameter.template get<intensity_p >() );

        scalar_type min = i * ( 1 - s );

        int region  = int( 3 * h );
        h -= region * constant_type::third();
        h *= constant_type::two_pi();
        scalar_type n = i*( 1+ s*cos( h ) / cos( constant_type::deg60() - h ) );

        scalar_type r;
        scalar_type g;
        scalar_type b;

        switch( region  % 3 )
         {
          case 0: r = n;                         break;
          case 1:        r = min;                break;
          case 2: b = n; g = min; r = 3*i-(g+b); break;
         }

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
