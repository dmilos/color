#ifndef color_yuv_get_red
#define color_yuv_get_red

// ::color::get::red( c )

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
      red( ::color::model< ::color::category::yuv<tag_name,reference_number> > const& color_parameter )
       {
        typedef ::color::category::yuv< tag_name, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { red_p  = ::color::place::_internal::red<akin_type>::position_enum };

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::yuv::parameter< tag_name, reference_number >  yuv_parameter_type; 

        static scalar_type const Wr   = yuv_parameter_type::Wr();
        static scalar_type const Vmax = yuv_parameter_type::Vmax();


        static scalar_type const b11 = 1, b12 = 0,                          b13 =  (1 - Wr) / Vmax;

        scalar_type y = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type v = normalize_type::template process<2>( color_parameter.template get<2>() );

        v = ( v - scalar_type(0.5) ) * scalar_type(2) * Vmax;

        scalar_type r = y +           v * b13;

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
