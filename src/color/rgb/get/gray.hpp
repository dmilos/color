#ifndef color_rgb_get_gray
#define color_rgb_get_gray

// ::color::get::gray( c )

#include "../../gray/akin/rgb.hpp"
#include "../../gray/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace _privateRGB
        {

         template< typename category_name >
          inline
          typename ::color::trait::component< typename ::color::akin::gray<category_name>::akin_type >::return_type
          gray( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_name > normalize_type;
 
            scalar_type value =
                 0.2126729 * normalize_type::template process<0>( color_parameter.template get<0>() )
               + 0.7151522 * normalize_type::template process<1>( color_parameter.template get<1>() )
               + 0.0721750 * normalize_type::template process<2>( color_parameter.template get<2>() );

            return diverse_type::template process<0>( value );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_uint8 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_uint8>( color_parameter );
       }

      inline

      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_uint16 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_uint32 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_uint64 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_float >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_double >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::rgb_ldouble >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::rgb_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateRGB::gray< ::color::category::rgb_ldouble>( color_parameter );
       }


    }
  }

#endif