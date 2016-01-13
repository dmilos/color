#ifndef color_yuv_get_gray
#define color_yuv_get_gray

// ::color::get::gray( c )

#include "../../gray/akin/yuv.hpp"
#include "../../gray/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/reformat.hpp"
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
          typename ::color::trait::component< typename ::color::akin::gray<category_name>::akin_type >::return_type
          gray( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;
            typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;
            typedef ::color::_internal::reformat< akin_type, category_name, scalar_type >  reformat_type;

            return reformat_type::template process<0,0>( color_parameter.template get<0>() );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_uint8 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_uint8>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_uint16 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_uint32 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_uint64 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_float >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_double >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::yuv_ldouble >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::yuv_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateYUV::gray<color::category::yuv_ldouble>( color_parameter );
       }


    }
  }

#endif