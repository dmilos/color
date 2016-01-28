#ifndef color_cmy_make_peru
#define color_cmy_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.196078, 0.478431, 0.752941 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x31, 0x79, 0xc0 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x3231, 0x7a79, 0xc0c0 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x32323231, 0x7a7a7a79, 0xc0c0c0c0 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x3232323232323000ull, 0x7a7a7a7a7a7a7800ull, 0xc0c0c0c0c0c0c000ull } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.196078, 0.478431, 0.752941 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.196078, 0.478431, 0.752941 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.196078, 0.478431, 0.752941 } );
       }

    }
  }

#endif
