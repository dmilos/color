#ifndef color_cmyk_get_red
#define color_cmyk_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/cmyk.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmyk< tag_name > >::akin_type >::return_type
      red( ::color::model< ::color::category::cmyk< tag_name > > const& color_parameter )
       {
        typedef ::color::category::cmyk< tag_name > category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { red_p      = ::color::place::_internal::red<akin_type>::position_enum };
        enum { cyan_p     = ::color::place::_internal::cyan< category_type >::position_enum };
        enum { key_p      = ::color::place::_internal::key< category_type >::position_enum };

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        scalar_type c = normalize_type::template process< cyan_p >(     color_parameter.template get< cyan_p >() );
        scalar_type k = normalize_type::template process< key_p >(      color_parameter.template get< key_p >() );

        scalar_type r = (scalar_type(1)-c) * (scalar_type(1)-k);

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
