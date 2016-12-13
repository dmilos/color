#ifndef color_xyz_get_inphase
#define color_xyz_get_inphase

// ::color::get::inphase( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::xyz< tag_name> >::component_const_type
      inphase( ::color::model< ::color::category::xyz< tag_name> > const& color_parameter )
       {
        typedef ::color::category::xyz< tag_name>  category_type;
        enum{ inphase_p  = ::color::place::_internal::inphase<category_type>::position_enum };

        return color_parameter.template get<inphase_p>();
       }

    }
  }

#endif
