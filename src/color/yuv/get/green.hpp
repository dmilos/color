#ifndef color_yuv_get_green
#define color_yuv_get_green

// ::color::get::green( c )

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
      green( ::color::model< ::color::category::yuv<tag_name, reference_number> > const& color_parameter )
       {
        typedef ::color::category::yuv<tag_name, reference_number>  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { green_p  = ::color::place::_internal::green<akin_type>::position_enum };

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::yuv::parameter< tag_name, reference_number >  yuv_parameter_type;

        static scalar_type const Wr   = yuv_parameter_type::Wr();
        static scalar_type const Wb   = yuv_parameter_type::Wb();
        static scalar_type const Wg   = yuv_parameter_type::Wg();
        static scalar_type const Umax = yuv_parameter_type::Umax();
        static scalar_type const Vmax = yuv_parameter_type::Vmax();

        static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg,  b23 = -Wr*(1 - Wr) / Vmax / Wg;

        scalar_type y = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type u = normalize_type::template process<1>( color_parameter.template get<1>() );
        scalar_type v = normalize_type::template process<2>( color_parameter.template get<2>() );

        u = ( u - scalar_type(0.5) ) * scalar_type(2) * Umax;
        v = ( v - scalar_type(0.5) ) * scalar_type(2) * Vmax;

        scalar_type g = y + u * b22 + v * b23;

        return diverse_type::template process<green_p>( g );
       }

    }
  }

#endif
