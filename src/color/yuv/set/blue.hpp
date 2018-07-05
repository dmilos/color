#ifndef color_yuv_set_blue
#define color_yuv_set_blue

// ::color::set::blue( c )

#include "../category.hpp"

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/yuv.hpp"
#include "../../rgb/trait/component.hpp"



 namespace color
  {
   namespace set
    {

     template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
      inline
      void
      blue
       (
                  ::color::model< ::color::category::yuv< tag_name, reference_number > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yuv< tag_name,reference_number > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::yuv< tag_name, reference_number >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        enum { blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };


        ::color::model< akin_type > rgb_instance( color_parameter );

        rgb_instance.template set<blue_p > ( component_parameter );

        color_parameter = rgb_instance;
       }

    }
  }

#endif
