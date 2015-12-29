#ifndef color_hsl_make_violet
#define color_hsl_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) 

      inline
      void violet( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xad;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb6f9;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb8c1d4u;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb8b8c2b3d554ul;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.833333, 0.760563, 0.721569 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.833333, 0.760563, 0.721569 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.833333, 0.760563, 0.721569 } );
       }

    }
  }

#endif
