#ifndef color_rgb_set_green
#define color_rgb_set_green

// ::color::set::green( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name >
      inline
      void
      green
       (
                  ::color::model< ::color::category::rgb<tag_name> >                                   & color_parameter,
        typename  ::color::model< ::color::category::rgb<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::rgb<tag_name>  category_type;
        enum{ green_p  = ::color::place::_internal::green<category_type>::position_enum };

        color_parameter.template set<green_p>( component_parameter );
       }

    }
  }

#endif
