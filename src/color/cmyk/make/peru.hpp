#ifndef color_cmyk_make_peru
#define color_cmyk_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.35122, 0.692683 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x59, 0xb0, 0x31 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x59e9, 0xb152, 0x3231 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x59e9859e, 0xb153ab14, 0x32323231 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x59e9859e9859e800ull, 0xb153ab153ab15000ull, 0x3232323232323000ull } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.35122, 0.692683, 0.196078 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.35122, 0.692683, 0.196078 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.35122, 0.692683, 0.196078 } );
       }

    }
  }

#endif
