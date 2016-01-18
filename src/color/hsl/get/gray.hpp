#ifndef color_hsl_get_gray
#define color_hsl_get_gray

// ::color::get::gray( c )

#include "../../gray/akin/hsl.hpp"
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
       namespace _privateHSL
        {

         template< typename category_name >
          inline
          typename ::color::trait::component< typename ::color::akin::gray<category_name>::akin_type >::return_type
          gray( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;

            typedef ::color::_internal::reformat< akin_type, category_name, scalar_type >    reformat_type; 

            return reformat_type::template process<0,2>( color_parameter.template get<2>() );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_uint8 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_uint8>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_uint16 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_uint32 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_uint64 >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_float >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_double >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::gray< ::color::category::hsl_ldouble >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::hsl_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateHSL::gray<color::category::hsl_ldouble>( color_parameter );
       }


    }
  }

#endif