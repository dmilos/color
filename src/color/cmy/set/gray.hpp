#ifndef color_cmy_set_gray
#define color_cmy_set_gray

// ::color::set::gray( c, val )

#include "../../generic/trait/scalar.hpp"
#include "../../generic/operation/operation.hpp"
#include "../../gray/constant.hpp"







 namespace color
  {
   namespace set
    {
     namespace _privateCMY
      {

       template< typename category_name >
        inline
        void
        gray
         (
                   ::color::_internal::model< category_name >                                   & color_parameter,
          typename ::color::trait::component< typename ::color::akin::gray<category_name>::akin_type >::input_const_type         component_parameter
         )
         {
          typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;
          typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;

          typedef ::color::_internal::normalize< category_name > normalize_cmy_type;
          typedef ::color::_internal::normalize< akin_type >     normalize_akin_type;

          typedef  ::color::constant::gray< akin_type > gray_const_type;

          scalar_type value = // convert to R G B
               gray_const_type::Rc() * ( scalar_type(1) - normalize_cmy_type::template process<0>( color_parameter.template get<0>() ) )
             + gray_const_type::Gc() * ( scalar_type(1) - normalize_cmy_type::template process<0>( color_parameter.template get<1>() ) )
             + gray_const_type::Bc() * ( scalar_type(1) - normalize_cmy_type::template process<0>( color_parameter.template get<2>() ) );

          value = normalize_akin_type::template process<0>( component_parameter ) / value;

          ::color::operation::scale( color_parameter,  scalar_type(1) - value );
         }

      }

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_float>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_double>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::gray<::color::category::cmy_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif