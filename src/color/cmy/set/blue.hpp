#ifndef color_cmy_set_blue
#define color_cmy_set_blue

// ::color::set::blue( c, val )

#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"



 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      blue
       (
                  ::color::model< ::color::category::cmy< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::cmy< tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;

        typedef  ::color::operation::_internal::invert< akin_type > invert_type;
        typedef  ::color::_internal::reformat< category_type, akin_type > reformat_type;
        enum{ magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum };

        color_parameter.template set<magenta_p>( reformat_type::template process<magenta_p,magenta_p>( invert_type::template component<magenta_p>( component_parameter ) ) );
       }

    }
  }

#endif
