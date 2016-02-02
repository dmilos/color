#ifndef color_yiq_set_red
#define color_yiq_set_red

// ::color::set::red( c, val )

#include "../../rgb/akin/akin.hpp"
#include "../category.hpp"

 namespace color
  {
   namespace set
    {


     template< typename tag_name >
      inline
      void
      red
       (
                  ::color::_internal::model< ::color::category::yiq< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yiq< tag_name > >::akin_type >::input_const_type         component_parameter 
       )
       {
        // TODO
       };

    }
  }

#endif
