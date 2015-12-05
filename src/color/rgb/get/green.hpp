#ifndef color_rgb_get_green
#define color_rgb_get_green

// ::color::get::green( c )

 namespace color
  {
   namespace get
    {

      inline
      ::color::_internal::model< color::category::rgb_uint8 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint8 > const& color_parameter )
      {
        return color_parameter.template get<1>();
       };

      inline
      ::color::_internal::model< color::category::rgb_uint16 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint16 > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

      inline
      ::color::_internal::model< color::category::rgb_uint32 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint32 > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

      inline
      ::color::_internal::model< color::category::rgb_uint64 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint64 > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

      inline
      ::color::_internal::model< color::category::rgb_float >::component_const_type
      green( ::color::_internal::model< color::category::rgb_float > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

      inline
      ::color::_internal::model< color::category::rgb_double >::component_const_type
      green( ::color::_internal::model< color::category::rgb_double > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

      inline
      ::color::_internal::model< color::category::rgb_ldouble >::component_const_type
      green( ::color::_internal::model< color::category::rgb_ldouble > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

    }
  }

#endif
