#ifndef color_rgb_make_fuchsia
#define color_rgb_make_fuchsia

// ::color::make::fuchsia( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #ff00ff

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0x00, 0xff } );
       }

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0x0000, 0xffff } );
       }

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0x00000000, 0xffffffff } );
       }

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 1, 1, 1 } );
       }

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0, 1 } );
       }

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0, 1 } );
       }

      inline
      void fuchsia( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0, 1 } );
       }

    }
  }

#endif
