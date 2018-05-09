#ifndef color_luv_get_saturation
#define color_luv_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::luv< tag_name> >::component_const_type
      saturation( ::color::model< ::color::category::luv< tag_name> > const& color_parameter )
       {
        typedef ::color::category::luv< tag_name>  category_type;

        // TODO

        return 0;
       }

    }
  }

#endif