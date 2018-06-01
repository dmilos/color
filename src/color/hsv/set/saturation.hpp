#ifndef color_hsv_set_saturation
#define color_hsv_set_saturation

// ::color::set::saturation( c, val )







#include "../place/place.hpp"
#include "../category.hpp"



 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      saturation
       (
                  ::color::model< ::color::category::hsv< tag_name > >                                   & color_parameter
        ,typename ::color::model< ::color::category::hsv< tag_name > >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::hsv< tag_name >  category_type;
        enum{ saturation_p  = ::color::place::_internal::saturation< category_type >::position_enum };

        color_parameter.template set<saturation_p>( component_parameter );
       }

    }
  }

#endif 