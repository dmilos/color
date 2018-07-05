#ifndef color_xyy_set_blue
#define color_xyy_set_blue

// ::color::set::blue( c )

#include "../../rgb/akin/xyy.hpp"
#include "../../rgb/trait/component.hpp"

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
                  ::color::model< ::color::category::xyy< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::xyy< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::xyy< tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        enum { blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };


        ::color::model< akin_type > rgb( color_parameter );

        rgb.template set<blue_p > ( component_parameter );

        color_parameter = rgb;
       }

    }
  }

#endif