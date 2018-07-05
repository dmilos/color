#ifndef color_gray_set_blue
#define color_gray_set_blue

// ::color::set::blue( c, val )


#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/gray.hpp"
#include "../../rgb/trait/component.hpp"

#include "../place/place.hpp"
#include "../category.hpp"


 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      blue
       (
                  ::color::model< ::color::category::gray< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::gray<tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;

        typedef  ::color::_internal::reformat<category_type, akin_type > reformat_type;

        enum{ blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };
        enum{ gray_p  = ::color::place::_internal::gray<category_type>::position_enum };

        color_parameter.template set<gray_p>( reformat_type::template process<gray_p,blue_p>( component_parameter ) );
       }

    }
  }

#endif
