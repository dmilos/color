#ifndef color_cmy_make_tomato
#define color_cmy_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.611765, 0.721569 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x9c, 0xb8 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x9c9c, 0xb8b8 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x9c9c9c9c, 0xb8b8b8b8 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x9c9c9c9c9c9ca000ull, 0xb8b8b8b8b8b8b800ull } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.611765, 0.721569 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.611765, 0.721569 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.611765, 0.721569 } );
       }

    }
  }

#endif
