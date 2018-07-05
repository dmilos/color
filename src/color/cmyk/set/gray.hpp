#ifndef color_cmyk_set_gray
#define color_cmyk_set_gray

// ::color::set::gray( c )

#include "../category.hpp"

#include "../../gray/akin/cmyk.hpp"
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
                  ::color::model< ::color::category::cmyk<tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::cmyk< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef typename ::color::akin::rgb< ::color::category::cmyk< tag_name > >::akin_type rgb_category_type;

        ::color::model<  rgb_category_type > rgb( color_parameter );

        ::color::set::gray( rgb, component_parameter );

        color_parameter = rgb;
       }

    }
  }

#endif
