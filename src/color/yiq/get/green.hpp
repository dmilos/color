#ifndef color_yiq_get_green
#define color_yiq_get_green

// ::color::get::green( c )

#include "../../generic/trait/scalar.hpp"



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
          green( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef ::color::trait::component< category_name > component_trait_type;

            typedef ::color::_internal::normalize< category_name > normalize_type;
            typedef ::color::_internal::diverse< category_name >   diverse_type;

            scalar_type value =
                        1 * normalize_type::template process<0>( color_parameter.template get<0>() )
               - 0.284399 * normalize_type::template process<1>( color_parameter.template get<1>() )
               - 0.771312 * normalize_type::template process<2>( color_parameter.template get<2>() )
               + 0.527856;

            // BUG !!!
            return typename component_trait_type::instance_type( diverse_type::template process<0>( value ) );
           }

        }
      }

      inline
      ::color::_internal::model< color::category::yiq_uint8 >::component_const_type
      green( ::color::_internal::model< color::category::yiq_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::yiq_uint16 >::component_const_type
      green( ::color::_internal::model< color::category::yiq_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint32 >::component_const_type
      green( ::color::_internal::model< color::category::yiq_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint64 >::component_const_type
      green( ::color::_internal::model< color::category::yiq_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_float >::component_const_type
      green( ::color::_internal::model< color::category::yiq_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_double >::component_const_type
      green( ::color::_internal::model< color::category::yiq_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_ldouble >::component_const_type
      green( ::color::_internal::model< color::category::yiq_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::green<color::category::yiq_ldouble>( color_parameter );
       };


    }
  }

#endif
