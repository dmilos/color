#ifndef color_gray_set_gray
#define color_gray_set_gray

// ::color::set::gray( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name >
      inline
      void
      gray
       (
                  ::color::model< ::color::category::gray< tag_name > >                                   & color_parameter,
        typename  ::color::model< ::color::category::gray< tag_name > >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::gray< tag_name >  category_type;
        enum{ gray_p  = ::color::place::_internal::gray< category_type >::position_enum };

        color_parameter.template set<gray_p>( component_parameter );
       }

    }
  }

#endif
