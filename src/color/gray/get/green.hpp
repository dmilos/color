#ifndef color_gray_get_green
#define color_gray_get_green

// ::color::get::green( c )



 namespace color
  {
   namespace get
    {

      inline
      ::color::_internal::model< ::color::category::gray_uint8 >::component_const_type
      green( ::color::_internal::model< ::color::category::gray_uint8 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

      inline
      ::color::_internal::model< ::color::category::gray_uint16 >::component_const_type
      green( ::color::_internal::model< ::color::category::gray_uint16 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

      inline
      ::color::_internal::model< color::category::gray_uint32 >::component_const_type
      green( ::color::_internal::model< color::category::gray_uint32 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

      inline
      ::color::_internal::model< ::color::category::gray_uint64 >::component_const_type
      green( ::color::_internal::model< ::color::category::gray_uint64 > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

      inline
      ::color::_internal::model< ::color::category::gray_float >::component_const_type
      green( ::color::_internal::model< ::color::category::gray_float > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

      inline
      ::color::_internal::model< ::color::category::gray_double >::component_const_type
      green( ::color::_internal::model< ::color::category::gray_double > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

      inline
      ::color::_internal::model< ::color::category::gray_ldouble >::component_const_type
      green( ::color::_internal::model< ::color::category::gray_ldouble > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };


    }
  }

#endif
