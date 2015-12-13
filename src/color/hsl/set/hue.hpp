#ifndef color_hsl_set_red
#define color_hsl_set_red

// ::color::set::red( c, val )

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace hsl
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            red
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
             )
             {
              color_parameter.template set<0>( component_parameter );
             }

          }
        }
      }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint8>( color_parameter, component_parameter );
       }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint16>( color_parameter, component_parameter );
       }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint32>( color_parameter, component_parameter );
       }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint64>( color_parameter, component_parameter );
       }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_float>( color_parameter, component_parameter );
       }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_double>( color_parameter, component_parameter );
       }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::hsl_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::hsl_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::hsl::_internal::red<::color::category::hsl_ldouble>( color_parameter, component_parameter );
       }

    }
  }

#endif
