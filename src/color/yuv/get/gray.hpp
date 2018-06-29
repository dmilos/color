#ifndef color_yuv_get_gray
#define color_yuv_get_gray

// ::color::get::gray( c )

#include "../../gray/place/place.hpp"
#include "../../gray/akin/yuv.hpp"
#include "../../gray/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
      inline
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::yuv<tag_name,reference_number> >::akin_type >::return_type
      gray( ::color::model< ::color::category::yuv<tag_name, reference_number> > const& color_parameter )
       {
        typedef ::color::category::yuv< tag_name, reference_number > category_type;

        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;
        typedef ::color::_internal::reformat< akin_type, category_type >  reformat_type;

        enum { luma_p  = ::color::place::_internal::luma<category_type>::position_enum };

        return reformat_type::template process<0,luma_p>( color_parameter.template get<luma_p>() );
       }

    }
  }

#endif