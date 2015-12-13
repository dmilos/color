#ifndef color_yiq_set_blue
#define color_yiq_set_blue

// ::color::set::blue( c, val )

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace yiq
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            blue
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
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
      blue
       (
         ::color::_internal::model< ::color::category::yiq_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_float>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_double>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::blue<::color::category::yiq_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 