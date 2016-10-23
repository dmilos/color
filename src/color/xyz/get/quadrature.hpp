#ifndef color_xyz_get_quadrature
#define color_xyz_get_quadrature

// ::color::get::quadrature( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::xyz< tag_name> >::component_const_type
      quadrature( ::color::model< ::color::category::xyz< tag_name> > const& color_parameter )
       {
         // TODO
        return 0;
       }

    }
  }

#endif 
