#ifndef color_yuv_get_blue
#define color_yuv_get_blue

// ::color::get::blue( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/yuv.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yuv<tag_name,reference_number> >::akin_type >::return_type
      blue( ::color::model< ::color::category::yuv<tag_name,reference_number> > const& color_parameter )
       {
        typedef ::color::category::yuv<tag_name,reference_number>  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::yuv::parameter< tag_name,reference_number >  yuv_parameter_type;

        static scalar_type const Wb   = yuv_parameter_type::Wb();
        static scalar_type const Umax = yuv_parameter_type::Umax();

        static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax),          b33 = 0;

        scalar_type y = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type u = normalize_type::template process<1>( color_parameter.template get<1>() );

        u = ( u - scalar_type(0.5) ) * scalar_type(2) * Umax;

        scalar_type b = y + u * b32;

        return diverse_type::template process<blue_p>( b );
       }

    }
  }

#endif
