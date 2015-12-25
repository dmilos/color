#ifndef color_hsl_make_silver
#define color_hsl_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.75, 0.75, 0.75 } ) 

      inline
      void silver( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb7bf0000;
       }

      inline
      void silver( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbc00;
       }

      inline
      void silver( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbf0000u;
       }

      inline
      void silver( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbfff00000000ul;
       }

      inline
      void silver( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 0.75 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 0.75 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 0.75 } );
       }

    }
  }

#endif

