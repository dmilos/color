#ifndef color_lab_get_saturation
#define color_lab_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< tag_name, reference_number > >::component_const_type
      saturation( ::color::model< ::color::category::lab< tag_name, reference_number > > const& c )
       {
        typedef ::color::category::lab< tag_name, reference_number >  category_type;

        enum
         {
           lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
         };

         auto const& l = c.template get< lightness_p>();
         auto const& a = c.template get< 1 >();
         auto const& b = c.template get< 2 >();

        // if( 0 == L ) TODO

        return sqrt(  a*a + b*b  )/ l;
       }

    }
  }

#endif