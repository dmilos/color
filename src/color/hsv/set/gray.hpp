#ifndef color_hsv_set_gray
#define color_hsv_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"

#include "../../gray/akin/hsv.hpp"
#include "../../gray/trait/component.hpp"

#include "../../rgb/rgb.hpp"



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
        typedef typename ::color::akin::rgb< ::color::category::hsv< tag_name > >::akin_type rgb_category_type;

        ::color::_internal::model<  rgb_category_type > rgb( color_parameter );

        ::color::set::gray( rgb, component_parameter );

        color_parameter = rgb;
       }

    }
  }

#endif
