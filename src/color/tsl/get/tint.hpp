#ifndef color_tsl_get_tint
#define color_tsl_get_tint

// ::color::get::tint( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::tsl< tag_name> >::component_const_type
      tint( ::color::model< ::color::category::tsl< tag_name> > const& color_parameter )
       {
        typedef ::color::category::tsl< tag_name>  category_type;
        enum{ tint_p  = ::color::place::_internal::tint<category_type>::position_enum };

        return color_parameter.template get<tint_p>();
       }

    }
  }

#endif 