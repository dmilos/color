#ifndef color_rgb_set_gray
#define color_rgb_set_gray

// ::color::set::gray( c, val )

#include "../../gray/akin/rgb.hpp"
#include "../../gray/trait/component.hpp"
#include "../../gray/constant.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"

#include "../../generic/trait/scalar.hpp"

 namespace color
  {
   namespace set
    {
     namespace _privateRGB
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
          typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
          typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;

          typedef ::color::_internal::normalize< category_name > normalize_rgb_type;
          typedef ::color::_internal::normalize< akin_type >     normalize_akin_type;

          typedef  ::color::constant::gray< akin_type > gray_const_type;

          scalar_type value =
               gray_const_type::Rc() * normalize_rgb_type::template process<0>( color_parameter.template get<0>() )
             + gray_const_type::Gc() * normalize_rgb_type::template process<0>( color_parameter.template get<1>() )
             + gray_const_type::Bc() * normalize_rgb_type::template process<0>( color_parameter.template get<2>() );

          value = normalize_akin_type::template process<0>( component_parameter ) / value;

          ::color::operation::scale( color_parameter, value );
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
        ::color::set::_privateRGB::gray<::color::category::rgb_uint8>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint16 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint16 >::input_const_type         component_parameter
       )
       {
        ::color::set::_privateRGB::gray<::color::category::rgb_uint16>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint32 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint32 >::input_const_type         component_parameter
       )
       {
        ::color::set::_privateRGB::gray<::color::category::rgb_uint32>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_uint64 >                                   & color_parameter
        ,::color::trait::component< ::color::category::rgb_uint64 >::input_const_type         component_parameter
       )
       {
        ::color::set::_privateRGB::gray<::color::category::rgb_uint64>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_float >                                         & color_parameter
        ,::color::trait::component< ::color::category::rgb_float >::input_const_type     component_parameter
       )
       {
        ::color::set::_privateRGB::gray<::color::category::rgb_float>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_double >                                       & color_parameter
        ,::color::trait::component< ::color::category::rgb_double >::input_const_type    component_parameter
       )
       {
        ::color::set::_privateRGB::gray<::color::category::rgb_double>( color_parameter, component_parameter );
       }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::rgb_ldouble >                                        & color_parameter
        ,::color::trait::component< ::color::category::rgb_ldouble >::input_const_type     component_parameter
       )
       {
        ::color::set::_privateRGB::gray<::color::category::rgb_ldouble>( color_parameter, component_parameter );
       }

    }
  }

#endif