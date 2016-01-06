#ifndef color_cmy_make_fuchsia
#define color_cmy_make_fuchsia

// ::color::make::fuchsia( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #ff00ff

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x38;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3e0;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00ff00u;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0000ffff0000ul;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 1, 0 } );
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 1, 0 } );
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 1, 0 } );
       }

    }
  }

#endif
