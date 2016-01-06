#ifndef color_hsl_make_fuchsia
#define color_hsl_make_fuchsia

// ::color::make::fuchsia( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #ff00ff

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7d;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7ff9;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fffd4u;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffffd554ul;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 100, 50 } );
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 100, 50 } );
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 100, 50 } );
       }

    }
  }

#endif
