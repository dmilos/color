#ifndef color_rgb_get_blue
#define color_rgb_get_blue

// ::color::get::blue( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::rgb< tag_name > >::component_const_type
      blue( ::color::model< ::color::category::rgb< tag_name > > const& color_parameter )
       {
        typedef ::color::category::rgb< tag_name >  category_type;
        enum{ blue_p  = ::color::place::_internal::blue<category_type>::position_enum };

        return color_parameter.template get<blue_p>();
       }

    }
  }

#endif
