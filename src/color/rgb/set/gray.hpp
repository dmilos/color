#ifndef color_rgb_set_gray
#define color_rgb_set_gray

// ::color::set::gray( c, val )

#include "../../generic/operation/operation.hpp"
#include "../../generic/trait/scalar.hpp"

#include "../../_internal/normalize.hpp"

 
 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace rgb
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            gray
             (
                       ::color::_internal::model< category_name >                                     & color_parameter,
              typename ::color::trait::component< typename ::color::akin::gray<category_name>::akin_type >::input_const_type         component_parameter
             )
             {
              typedef ::color::trait::scalar< category_name >::instance_type scalar_type;
              typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;
              typedef ::color::_internal::normalize< akin_type > normalize_type; 

              scalar_type value =
                   0.2126729 * normalize_type::template process<0>( color_parameter.template get<0>() ) 
                 + 0.7151522 * normalize_type::template process<0>( color_parameter.template get<1>() ) 
                 + 0.0721750 * normalize_type::template process<0>( color_parameter.template get<2>() );

              value = normalize_type::template process<0>( component_parameter )  / value;

              ::color::operation::scale( color_parameter, value );
             }

          }
        }
      }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint8 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint8 >::input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_uint8>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint16 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint16 >::input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_uint16>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint32 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint32 >::input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_uint32>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint64 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint64 >::input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_uint64>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_float >                                         & color_parameter
        ,::color::trait::component< ::color::category::rgb_float >::input_const_type     component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_float>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_double >                                       & color_parameter
        ,::color::trait::component< ::color::category::rgb_double >::input_const_type    component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_double>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_ldouble >                                        & color_parameter
        ,::color::trait::component< ::color::category::rgb_ldouble >::input_const_type     component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::gray<::color::category::rgb_ldouble>( color_parameter, component_parameter );
       }

    }
  }

#endif