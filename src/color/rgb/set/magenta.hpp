#ifndef color_rgb_set_magenta
#define color_rgb_set_magenta

// ::color::set::magenta( c, val )

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
            magenta
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
             )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename  trait_type::component_type component_type;

              component_type new_component;;

              new_component = ( trait_type::template range<2>() - ( component_parameter - trait_type::template minimum<2>() ) ) + trait_type::template  minimum<2>();

              color_parameter.template set<2>( new_component );
             }

          }
        }
      }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint8 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_uint8>( color_parameter, component_parameter );
       }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint16 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_uint16>( color_parameter, component_parameter );
       }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint32 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_uint32>( color_parameter, component_parameter );
       }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_uint64 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_uint64>( color_parameter, component_parameter );
       }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_float >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_float>( color_parameter, component_parameter );
       }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_double >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_double>( color_parameter, component_parameter );
       }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::rgb_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::rgb_ldouble >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::rgb::_internal::magenta<::color::category::rgb_ldouble>( color_parameter, component_parameter );
       }

    }
  }

#endif 