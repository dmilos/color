#ifndef color_cmyk_get_gray
#define color_cmyk_get_gray

// ::color::get::gray( c )

#include "../../gray/akin/cmyk.hpp"
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
       namespace _privateCMYK
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

             scalar_type c = normalize_type::template process<0>( color_parameter.template get<0>() );
             scalar_type m = normalize_type::template process<1>( color_parameter.template get<1>() );
             scalar_type y = normalize_type::template process<2>( color_parameter.template get<2>() );
             scalar_type k = normalize_type::template process<3>( color_parameter.template get<3>() );

            scalar_type value =
               ( 0.2126729 * (1-c) 
               + 0.7151522 * (1-m) 
               + 0.0721750 * (1-y) ) * (1-k);

            return diverse_type::template process<0>( value );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_uint8 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_uint8>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_uint16 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_uint32 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_uint64 >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_float >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_double >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::cmyk_ldouble >::akin_type >::return_type
      gray( ::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMYK::gray<color::category::cmyk_ldouble>( color_parameter );
       }


    }
  }

#endif