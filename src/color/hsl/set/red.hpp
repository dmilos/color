#ifndef color_hsl_set_red
#define color_hsl_set_red

// ::color::set::red( c, val )

#include "../category.hpp"

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/hsl.hpp"
#include "../../rgb/trait/component.hpp"


 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      red
       (
                  ::color::model< ::color::category::hsl< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::hsl< tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        enum { red_p  = ::color::place::_internal::red<akin_type>::position_enum };


        ::color::model< akin_type > rgb( color_parameter );

        rgb.template set<red_p> ( component_parameter );

        color_parameter = rgb;
       }

    }
  }

#endif
