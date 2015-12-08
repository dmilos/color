#ifndef color_gray_set_blue
#define color_gray_set_blue

// ::color::set::blue( c, val )

 namespace color
  {
   namespace set
    {

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint8 >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint16 >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint32 >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint64 >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_float >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_double >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::gray_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_ldouble >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

    }
  }

#endif 