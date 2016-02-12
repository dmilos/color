#ifndef color_hsv_set_gray
#define color_hsv_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"

#include "../../gray/place/place.hpp"
#include "../../gray/akin/hsl.hpp"
#include "../../gray/trait/component.hpp"



 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      gray
       (
                  ::color::_internal::model< ::color::category::hsv< tag_name > >                               & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsv< tag_name > >::akin_type >::input_const_type         component_parameter
       )
       {
        typedef ::color::category::hsv< tag_name >    category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;
      //enum { gray_p  = ::color::place::_internal::green<akin_type>::position_enum };

        // TODO This is wrong!!!
        ::color::_internal::model< akin_type > g( color_parameter );

        g.template set< 0 > ( component_parameter );

        color_parameter = g;
       }

    }
  }

#endif
