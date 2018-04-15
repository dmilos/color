#ifndef color_gray_get_white
#define color_gray_get_white

// ::color::get::white( c )

#include "../../generic/get/white.hpp"
#include "../../generic/model.hpp"
#include "../category.hpp"
#include "../trait/component.hpp"

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      typename ::color::trait::component< ::color::category::gray<tag_name> >::return_type
      white( ::color::model< ::color::category::gray<tag_name> > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif
