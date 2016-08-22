#ifndef color_hcg_set_blue
#define color_hcg_set_blue

// ::color::set::blue( c )

#include "../category.hpp"

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/hcg.hpp"
#include "../../rgb/trait/component.hpp"


 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      blue
       (
                  ::color::model< ::color::category::hcg< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hcg< tag_name > >::akin_type >::input_const_type         component_parameter
       )
       {
        typedef ::color::category::hcg< tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        enum { blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };


        ::color::model< akin_type > rgb( color_parameter );

        rgb.template set<blue_p > ( component_parameter );

        color_parameter = rgb;
       }

    }
  }

#endif
