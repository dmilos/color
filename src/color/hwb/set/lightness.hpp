#ifndef color_hwb_set_lightness
#define color_hwb_set_lightness

// ::color::set::lightness( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name >
      inline
      void
      lightness
       (
                  ::color::model< ::color::category::hwb<tag_name> >                                   & color_parameter,
        typename  ::color::model< ::color::category::hwb<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::hwb<tag_name>  category_type;
        enum
         {
           lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
         };

        color_parameter.template set<lightness_p>( component_parameter );
       }

    }
  }

#endif
