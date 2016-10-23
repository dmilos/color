#ifndef color_xyz_get_gray
#define color_xyz_get_gray

// ::color::get::gray( c )

#include "../../gray/place/place.hpp"
#include "../../gray/akin/xyz.hpp"
#include "../../gray/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::xyz<tag_name> >::akin_type >::return_type
      gray( ::color::model< ::color::category::xyz<tag_name> > const& color_parameter )
       {
         // TODO
        return 0;
       }

    }
  }

#endif