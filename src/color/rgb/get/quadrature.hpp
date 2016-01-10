#ifndef color_rgb_get_quadrature
#define color_rgb_get_quadrature

// ::color::get::quadrature( c )

#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace rgb
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            quadrature( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename trait_type::component_type     component_type;

              scalar_type value =
                 + 0.211 * ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / scalar_type( trait_type::template range<0>() )
                 - 0.523 * ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / scalar_type( trait_type::template range<1>() )
                 + 0.312 * ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / scalar_type( trait_type::template range<2>() )
                 ;

              value = value / scalar_type(0.5226 * 2) + scalar_type(0.5);

              return component_type( value * trait_type::template range<0>() + trait_type::template minimum<0>() );
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::rgb_uint8 >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint16 >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_uint16>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint32 >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_uint32>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint64 >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_uint64>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_float >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_float > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_float>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_double >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_double > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_double>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_ldouble >::component_const_type
      quadrature( ::color::_internal::model< color::category::rgb_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::quadrature<color::category::rgb_ldouble>( color_parameter );
       }


    }
  }

#endif