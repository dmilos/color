#ifndef color_cmyk_set_red
#define color_cmyk_set_red

// ::color::set::red( c, val )

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
            red
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
             )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename  trait_type::component_type component_type;

              component_type new_component;;

              new_component = ( trait_type::template range<0>() - ( component_parameter - trait_type::template minimum<0>() ) ) + trait_type::template  minimum<0>();

              color_parameter.template set<0>( new_component );

             }

          }
        }
      }

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_float>( color_parameter, component_parameter );
       };

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_double>( color_parameter, component_parameter );
       };

      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif
