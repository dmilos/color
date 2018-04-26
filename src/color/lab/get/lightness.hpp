#ifndef color_lab_get_lightness
#define color_lab_get_lightness

// ::color::get::lightness( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< tag_name,reference_number> >::component_const_type
      lightness( ::color::model< ::color::category::lab<tag_name,reference_number> > const& color_parameter )
       {
        typedef ::color::category::lab<tag_name,reference_number>  category_type;
        enum
         {
          lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum 
         };

        return color_parameter.template get<lightness_p>();
       }

    }
  }

#endif
