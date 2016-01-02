#ifndef color_cmy_set_gray
#define color_cmy_set_gray

// ::color::set::gray( c, val )

#include "../../generic/operation/operation.hpp"

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace cmy
        {
         namespace _internal
          {

           template< typename category_name, typename scalar_name = double >
            inline
            void
            gray
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
             )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename trait_type::component_type component_type;

              scalar_name value = 
                   0.2126 * ( scalar_name(1) - ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / trait_type::template range<0>())
                 + 0.7152 * ( scalar_name(1) - ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / trait_type::template range<1>())
                 + 0.0722 * ( scalar_name(1) - ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / trait_type::template range<2>());

              value = scalar_name( component_parameter - trait_type::template minimum<0>() ) / trait_type::template range<0>()  / value;

              ::color::operation::scale( color_parameter, value );
             }

          }
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
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_float>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_double>( color_parameter, component_parameter );
       };

      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::gray<::color::category::cmy_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 