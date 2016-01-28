#ifndef color_yiq_make_orchid
#define color_yiq_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.609106, 0.119126, 0.212353 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x9b, 0x98, 0xb3 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x9bed, 0x9998, 0xb402 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x9bee5cf3, 0x9998a2d1, 0xb4032ef0 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x9bee5cf481d1b000ull, 0x9998a2d208b90000ull, 0xb4032ef1a46c7000ull } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.609106, 0.119126, 0.212353 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.609106, 0.119126, 0.212353 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.609106, 0.119126, 0.212353 } );
       }

    }
  }

#endif
