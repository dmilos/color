#ifndef color_rgb_set_red
#define color_rgb_set_red

// ::color::set::red( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name >
      inline
      void
      red
       (
                  ::color::model< ::color::category::rgb<tag_name> >                                   & color_parameter,
        typename  ::color::model< ::color::category::rgb<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::rgb<tag_name>  category_type;
        enum{ red_p  = ::color::place::_internal::red<category_type>::position_enum };

        color_parameter.template set<red_p>( component_parameter );
       }

    }
  }

#endif
