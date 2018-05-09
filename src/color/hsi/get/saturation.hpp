#ifndef color_hsi_get_saturation
#define color_hsi_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::hsi< tag_name> >::component_const_type
      saturation( ::color::model< ::color::category::hsi< tag_name> > const& color_parameter )
       {
        typedef ::color::category::hsi< tag_name>  category_type;
        enum{ saturation_p  = ::color::place::_internal::saturation<category_type>::position_enum };

        return color_parameter.template get<saturation_p>();
       }

    }
  }

#endif 