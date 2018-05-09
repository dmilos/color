#ifndef color_LabCH_get_saturation
#define color_LabCH_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::LabCH< tag_name> >::component_const_type
      saturation( ::color::model< ::color::category::LabCH< tag_name> > const& c )
       {
        typedef ::color::category::LabCH< tag_name>  category_type;

        enum
         {
           lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
         };

         auto const& L = c.template get< lightness_p>();
         auto const& C = c.template get< 1 >();
         auto const& H = c.template get< 2 >();

        // if( 0 == L ) TODO

        return C / L;
       }

    }
  }

#endif