#ifndef color_LabCH_get_lightness
#define color_LabCH_get_lightness

// ::color::get::lightness( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::LabCH< tag_name> >::component_const_type
      lightness( ::color::model< ::color::category::LabCH<tag_name> > const& color_parameter )
       {
        typedef ::color::category::LabCH< tag_name>  category_type;
        enum
         {
          lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum 
         };

        return color_parameter.template get<lightness_p>();
       }

    }
  }

#endif
