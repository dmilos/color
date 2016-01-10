#ifndef color_cmyk_get_blue
#define color_cmyk_get_blue

// ::color::get::blue( c )

#include "../../rgb/akin/cmyk.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace cmyk
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::trait::component< typename ::color::akin::rgb<category_name>::akin_type >::return_type
            blue( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

              typedef typename ::color::akin::rgb<category_name >::akin_type     akin_type;

              typedef  ::color::operation::_internal::invert< category_name > invert_type; 
              typedef  ::color::_internal::reformat< akin_type, category_name, scalar_type > reformat_type;

              return reformat_type::template process<2,2>( invert_type::template component<2>( color_parameter.template get<2>() ) );              
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_float >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_float > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_double >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_double > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
      blue( ::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_ldouble>( color_parameter );
       };


    }
  }

#endif
