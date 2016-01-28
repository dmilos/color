#ifndef color_hsv_make_plum
#define color_hsv_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 27.6018, 86.6667 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0x46, 0xdd } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0x46a8, 0xdddd } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0x46a91f46, 0xdddddddd } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x46a91f46a91f4800ull, 0xdddddddddddde000ull } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 27.6018, 86.6667 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 27.6018, 86.6667 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 27.6018, 86.6667 } );
       }

    }
  }

#endif
