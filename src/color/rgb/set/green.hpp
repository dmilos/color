#ifndef color_rgb_set_green
#define color_rgb_set_green

// ::color::set::green( c, val )

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
            green
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
      green
       (
         ::color::_internal::model< ::color::category::rgb_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_uint8>( color_parameter, component_parameter );
       }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::rgb_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_uint16>( color_parameter, component_parameter );
       }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::rgb_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_uint32>( color_parameter, component_parameter );
       }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::rgb_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_uint64>( color_parameter, component_parameter );
       }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::rgb_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_float>( color_parameter, component_parameter );
       }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::rgb_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_double>( color_parameter, component_parameter );
       }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::rgb_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::green<::color::category::rgb_ldouble>( color_parameter, component_parameter );
       }

    }
  }

#endif 