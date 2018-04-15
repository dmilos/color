#ifndef color_hwb_get_white
#define color_hwb_get_white

// ::color::get::white( c )

#include "../category.hpp"
#include "../place/white.hpp"
#include "../trait/component.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< ::color::category::hwb<tag_name> >::return_type
      white( ::color::model< ::color::category::hwb<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hwb<tag_name> category_type;
        enum { white_p  = ::color::place::_internal::white<category_type>::position_entity };

        return color_parameter.template get<white_p>();
       }

    }
  }

#endif
