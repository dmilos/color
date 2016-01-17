#ifndef color_yuv_get_blue
#define color_yuv_get_blue

// ::color::get::blue( c )

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
     namespace _internal
      {
       namespace _privateYUV
        {

         template< typename category_name >
          inline
          typename ::color::trait::component< typename ::color::akin::rgb<category_name>::akin_type >::return_type
          blue( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef typename ::color::akin::rgb<category_name >::akin_type     akin_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_name > normalize_type;
 
            typedef ::color::constant::yuv< category_name >  yuv_const_type; 

            static scalar_type const Wb   = yuv_const_type::Wb();
            static scalar_type const Umax = yuv_const_type::Umax();

            static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax),          b33 = 0;

            scalar_type y = normalize_type::template process<0>( color_parameter.template get<0>() );
            scalar_type u = normalize_type::template process<1>( color_parameter.template get<1>() );

            u = ( u - scalar_type(0.5) ) * scalar_type(2) * Umax;

            scalar_type b = y + u * b32;

            return diverse_type::template process<0>( diverse_type::template process<2>( b ) );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_uint8>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_uint8>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_uint16>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_uint32>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_uint64>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_float>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_double>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yuv_ldouble>::akin_type >::return_type
      blue( ::color::_internal::model< ::color::category::yuv_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::blue<color::category::yuv_ldouble>( color_parameter );
       }


    }
  }

#endif
