#ifndef color_yiq_get_quadrature
#define color_yiq_get_quadrature

// ::color::get::quadrature( c )



 namespace color
  {
   namespace get
    {

      inline
      ::color::_internal::model< color::category::yiq_uint8 >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_uint8 > const& color_parameter )
       {
        return color_parameter.template get<2>();
       }

      inline
      ::color::_internal::model< color::category::yiq_uint16 >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_uint16 > const& color_parameter )
       {
        return color_parameter.template get<2>();
       };

      inline
      ::color::_internal::model< color::category::yiq_uint32 >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_uint32 > const& color_parameter )
       {
        return color_parameter.template get<2>();
       };

      inline
      ::color::_internal::model< color::category::yiq_uint64 >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_uint64 > const& color_parameter )
       {
        return color_parameter.template get<2>();
       };

      inline
      ::color::_internal::model< color::category::yiq_float >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_float > const& color_parameter )
       {
        return color_parameter.template get<2>();
       };

      inline
      ::color::_internal::model< color::category::yiq_double >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_double > const& color_parameter )
       {
        return color_parameter.template get<2>();
       };

      inline
      ::color::_internal::model< color::category::yiq_ldouble >::component_const_type
      quadrature( ::color::_internal::model< color::category::yiq_ldouble > const& color_parameter )
       {
        return color_parameter.template get<2>();
       };


    }
  }

#endif