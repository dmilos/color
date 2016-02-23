#ifndef color_rgb_get_red
#define color_rgb_get_red

// ::color::get::red( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
      red( ::color::model< ::color::category::rgb<tag_name> > const& color_parameter )
       {
        typedef ::color::category::rgb< tag_name>  category_type;
        enum{ red_p  = ::color::place::_internal::red<category_type>::position_enum };

        return color_parameter.template get<red_p>();
       }

    }
  }

#endif
