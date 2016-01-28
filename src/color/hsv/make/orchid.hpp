#ifndef color_hsv_make_orchid
#define color_hsv_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 302.264, 48.6239, 85.4902 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd6, 0x7b, 0xda } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd6f0, 0x7c79, 0xdada } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd6f18269, 0x7c7a20e0, 0xdadadada } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd6f1826a439f6800ull, 0x7c7a20e177c7a000ull, 0xdadadadadadad800ull } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 302.264, 48.6239, 85.4902 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 302.264, 48.6239, 85.4902 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 302.264, 48.6239, 85.4902 } );
       }

    }
  }

#endif
