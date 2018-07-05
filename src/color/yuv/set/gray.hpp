#ifndef color_yuv_set_gray
#define color_yuv_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"

#include "../../gray/place/place.hpp"
#include "../../gray/akin/yuv.hpp"
#include "../../gray/trait/component.hpp"



 namespace color
  {
   namespace set
    {

     template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
      inline
      void
      gray
       (
                  ::color::model< ::color::category::yuv< tag_name, reference_number > >                               & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::yuv< tag_name, reference_number > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::yuv< tag_name, reference_number >     category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::reformat< category_type, akin_type >    reformat_type;
        color_parameter.template set<0>( reformat_type::template process<0,0>( component_parameter ) );
       }

    }
  }

#endif
