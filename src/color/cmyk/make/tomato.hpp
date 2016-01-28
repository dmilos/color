#ifndef color_cmyk_make_tomato
#define color_cmyk_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.611765, 0.721569 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x9c, 0xb8, 0x00 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x9c9c, 0xb8b8, 0x0000 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x9c9c9c9c, 0xb8b8b8b8, 0x00000000 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x9c9c9c9c9c9ca000ull, 0xb8b8b8b8b8b8b800ull, 0x0000000000000000ull } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.611765, 0.721569, 0 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.611765, 0.721569, 0 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.611765, 0.721569, 0 } );
       }

    }
  }

#endif
