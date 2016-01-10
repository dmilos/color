#ifndef color_yiq_get_red
#define color_yiq_get_red

#include "../../generic/trait/scalar.hpp"

// ::color::get::red( c )
/*
    Start
     [ R ]     [ 1   0.9563   0.6210 ] [ Y ]
     [ G ]  =  [ 1  -0.2721  -0.6474 ] [ I ]
     [ B ]     [ 1  -1.1070   1.7046 ] [ Q ]

     Range of YIQ
     Y [ 0.0, 1.0]
     I [ -0.5226, 0.5226]
     Q [ -0.5957 0.5957]

     Y = Y'
     I = I' * ( 2 * 0.5226 ) - 0.5226
     Q = Q' * ( 2 * 0.5957 ) - 0.5957

     unit to unit
     [ R ]     { 1,   0.9563,   0.6210 } ( { 1,            0,          0 } [ Y' ] + [  0.0    ] )
     [ G ]  =  { 1,  -0.2721,  -0.6474 } ( { 0,   2 * 0.5226,          0 } [ I' ] + [ -0.5226 ] )
     [ B ]     { 1,  -1.1070,   1.7046 } ( { 0,            0, 2 * 0.5957 } [ Q' ] + [ -0.5957 ] )

     [ 1. | 0.999525  |  0.739859 ] + [-0.869692]
     [ 1. | -0.284399 | -0.771312 ] + [ 0.527856]
     [ 1. | -1.15704  |  2.03086  ] + [-0.436912]
*/

 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace _privateYIQ
        {

         template< typename category_name >
          inline
          typename ::color::_internal::model< category_name >::component_const_type
          red( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;
            typedef ::color::_internal::normalize< category_name > normalize_type;
            typedef ::color::_internal::diverse< category_name >   diverse_type;

            scalar_type value =
                        1 * normalize_type::template process<0>( color_parameter.template get<0>() )
               + 0.999525 * normalize_type::template process<1>( color_parameter.template get<1>() )
               + 0.739859 * normalize_type::template process<2>( color_parameter.template get<2>() )
               - 0.869692;

            // BUG !!!
            return diverse_type::template process<0>( value );
           }

        }
      }

      inline
      ::color::_internal::model< color::category::yiq_uint8 >::component_const_type
      red( ::color::_internal::model< color::category::yiq_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::yiq_uint16 >::component_const_type
      red( ::color::_internal::model< color::category::yiq_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint32 >::component_const_type
      red( ::color::_internal::model< color::category::yiq_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint64 >::component_const_type
      red( ::color::_internal::model< color::category::yiq_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_float >::component_const_type
      red( ::color::_internal::model< color::category::yiq_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_double >::component_const_type
      red( ::color::_internal::model< color::category::yiq_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_ldouble >::component_const_type
      red( ::color::_internal::model< color::category::yiq_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_ldouble>( color_parameter );
       };


    }
  }

#endif
