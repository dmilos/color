#ifndef color_yiq_get_red
#define color_yiq_get_red

// ::color::get::red( c )

#include "../../rgb/akin/yiq.hpp"
#include "../../rgb/trait/component.hpp"

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
       namespace _privateYIQ
        {

         template< typename category_name >
          inline
          typename ::color::trait::component< typename ::color::akin::rgb<category_name>::akin_type >::return_type
          red( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef typename ::color::akin::rgb<category_name >::akin_type     akin_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_name > normalize_type;
 
            static scalar_type b11 = 1,                     b12 =  0.9562948323208939905, b13 =  0.6210251254447287141;
            static scalar_type b21 = 1,                     b22 = -0.2721214740839773195, b23 = -0.6473809535176157222;
            static scalar_type b31 = 1,                     b32 = -1.1069899085671282160, b33 =  1.7046149754988293290;

            scalar_type y = normalize_type::template process<0>( color_parameter.template get<0>() );
            scalar_type i = normalize_type::template process<1>( color_parameter.template get<1>() );
            scalar_type q = normalize_type::template process<2>( color_parameter.template get<2>() );

            i = ( scalar_type(2) * i - scalar_type(1) ) * 0.5957161349127745527;
            q = ( scalar_type(2) * q - scalar_type(1) ) * 0.5225910452916111683;

            scalar_type r = b11 * y + b12 * i + b13 * q;

            return diverse_type::template process<0>( r );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_uint8>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint8>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_uint16>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_uint32>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_uint64>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_float>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_double>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb<::color::category::yiq_ldouble>::akin_type >::return_type
      red( ::color::_internal::model< color::category::yiq_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::red<color::category::yiq_ldouble>( color_parameter );
       }


    }
  }

#endif