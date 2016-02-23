#ifndef color_rgb_get_green
#define color_rgb_get_green

// ::color::get::green( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
      green( ::color::model< ::color::category::rgb< tag_name> > const& color_parameter )
       {
        typedef ::color::category::rgb< tag_name>  category_type;
        enum{ green_p  = ::color::place::_internal::green<category_type>::position_enum };

        return color_parameter.template get<green_p>();
       }

    }
  }

#endif
