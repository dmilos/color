#ifndef color_hwb_get_black
#define color_hwb_get_black

// ::color::get::black( c )

#include "../category.hpp"
#include "../place/black.hpp"
#include "../trait/component.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< ::color::category::hwb<tag_name> >::return_type
      black( ::color::model< ::color::category::hwb<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hwb<tag_name> category_type;
        enum { black_p  = ::color::place::_internal::black<category_type>::position_entity };

        return color_parameter.template get<black_p>();
       }

    }
  }

#endif
