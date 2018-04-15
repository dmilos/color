#ifndef color_hwb_get_hue
#define color_hwb_get_hue

// ::color::get::hue( c )

#include "../category.hpp"
#include "../place/hue.hpp"
#include "../trait/component.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< ::color::category::hwb<tag_name> >::return_type
      hue( ::color::model< ::color::category::hwb<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hwb<tag_name> category_type;
        enum { hue_p  = ::color::place::_internal::hue<category_type>::position_enum };

        return color_parameter.template get<hue_p>();
       }

    }
  }

#endif
