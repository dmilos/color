#ifndef color_rgb_set_blue
#define color_rgb_set_blue

// ::color::set::blue( c, val )

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
            blue
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
             )
             {
              color_parameter.template set<2>( component_parameter );
             }

          }
        }
      }

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint8 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint16 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint32 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint64 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_float >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_float>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_double >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_double>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::rgb_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_ldouble >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::blue<::color::category::rgb_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 