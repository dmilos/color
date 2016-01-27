#ifndef color_gray_get_gray
#define color_gray_get_gray

// ::color::get::gray( c )

#include "../../_internal/model.hpp"
#include "../category.hpp"
#include "../trait/component.hpp"

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      typename ::color::trait::component< ::color::category::gray<tag_name> >::return_type
      gray( ::color::_internal::model< ::color::category::gray<tag_name> > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif
