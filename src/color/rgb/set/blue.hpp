#ifndef color_rgb_set_blue
#define color_rgb_set_blue

// ::color::set::blue( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name >
      inline
      void
      blue
       (
                  ::color::model< ::color::category::rgb<tag_name> >                                   & color_parameter,
        typename  ::color::model< ::color::category::rgb<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::rgb<tag_name>  category_type;
        enum{ blue_p  = ::color::place::_internal::blue<category_type>::position_enum };

        color_parameter.template set<blue_p>( component_parameter );
       }

    }
  }

#endif
