#ifndef color_cmy_set_blue
#define color_cmy_set_blue

// ::color::set::blue( c, val )

#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

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
                  ::color::_internal::model< ::color::category::cmy< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::input_const_type         component_parameter
       )
       {
        typedef ::color::category::cmy<tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef  ::color::operation::_internal::invert< akin_type > invert_type;
        typedef  ::color::_internal::reformat<category_type, akin_type, scalar_type > reformat_type;

        color_parameter.template set<2>( reformat_type::template process<2,2>( invert_type::template component<2>( component_parameter ) ) );
       }

    }
  }

#endif
