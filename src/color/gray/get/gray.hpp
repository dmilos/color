#ifndef color_gray_get_gray
#define color_gray_get_gray

// ::color::get::gray( c )

#include "../../_internal/model.hpp"
#include "../category.hpp"
#include "../trait/component.hpp"

 namespace color
  {
   namespace get
    {

      inline
      ::color::trait::component< ::color::category::gray_uint8 >::return_type
      gray( ::color::_internal::model< ::color::category::gray_uint8 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

      inline
      ::color::trait::component< ::color::category::gray_uint16 >::return_type
      gray( ::color::_internal::model< ::color::category::gray_uint16 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

      inline
      ::color::trait::component< ::color::category::gray_uint32 >::return_type
      gray( ::color::_internal::model< ::color::category::gray_uint32 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

      inline
      ::color::trait::component< ::color::category::gray_uint64 >::return_type
      gray( ::color::_internal::model< ::color::category::gray_uint64 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

      inline
      ::color::trait::component< ::color::category::gray_float >::return_type
      gray( ::color::_internal::model< ::color::category::gray_float > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

      inline
      ::color::trait::component< ::color::category::gray_double >::return_type
      gray( ::color::_internal::model< ::color::category::gray_double > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

      inline
      ::color::trait::component< ::color::category::gray_ldouble >::return_type
      gray( ::color::_internal::model< ::color::category::gray_ldouble > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif