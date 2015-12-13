#ifndef color_cmyk_set_yellow
#define color_cmyk_set_yellow

// ::color::set::yellow( c, val )

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace cmyk
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            yellow
             (
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
             )
             {
              color_parameter.template set<1>( component_parameter );
             }

          }
        }
      }

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_float>( color_parameter, component_parameter );
       };

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_double>( color_parameter, component_parameter );
       };

      inline
      void
      yellow
       (
         ::color::_internal::model< ::color::category::cmyk_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif