#ifndef color_cmy_get_blue
#define color_cmy_get_blue

// ::color::get::blue( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/get/blue.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::return_type
      blue( ::color::model< ::color::category::cmy<tag_name> > const& color_parameter )
       {
        typedef ::color::category::cmy<tag_name> category_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { blue_p     = ::color::place::_internal::blue<akin_type>::position_enum };
        enum { magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum };

        typedef  ::color::operation::_internal::invert< category_type > invert_type;
        typedef  ::color::_internal::reformat< akin_type, category_type > reformat_type;

        return reformat_type::template process<blue_p,magenta_p>( invert_type::template component<magenta_p>( color_parameter.template get<magenta_p>() ) );
       }

    }
  }

#endif
