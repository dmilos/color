#ifndef color_cmy_get_red
#define color_cmy_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/get/red.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::return_type
      red( ::color::model< ::color::category::cmy<tag_name> > const& color_parameter )
       {
        typedef ::color::category::cmy<tag_name> category_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { red_p  = ::color::place::_internal::red<akin_type>::position_enum };
        enum { cyan_p = ::color::place::_internal::cyan<category_type>::position_enum };

        typedef  ::color::operation::_internal::invert< category_type > invert_type;
        typedef  ::color::_internal::reformat< akin_type, category_type > reformat_type;

        return reformat_type::template process<red_p,cyan_p>( invert_type::template component<cyan_p>( color_parameter.template get<cyan_p>() ) );
       }

    }
  }

#endif
