#ifndef color_LuvCH_set_green
#define color_LuvCH_set_green

// ::color::set::green( c )

#include "../../rgb/akin/LuvCH.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"


 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      green
       (
                  ::color::model< ::color::category::LuvCH< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::LuvCH< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::LuvCH< tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        enum { green_p  = ::color::place::_internal::green<akin_type>::position_enum };


        ::color::model< akin_type > rgb( color_parameter );

        rgb.template set< green_p > ( component_parameter );

        color_parameter = rgb;
       }

    }
  }

#endif
