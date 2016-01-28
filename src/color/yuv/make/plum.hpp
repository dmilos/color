#ifndef color_yuv_make_plum
#define color_yuv_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.726247, 0.0691004, 0.123193 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb9, 0x93, 0x99 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb9ea, 0x9448, 0x99a3 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb9eb53c5, 0x94494e81, 0x99a3dd90 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb9eb53c676976000ull, 0x94494e81f0504000ull, 0x99a3dd90e01f4800ull } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.726247, 0.0691004, 0.123193 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.726247, 0.0691004, 0.123193 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.726247, 0.0691004, 0.123193 } );
       }

    }
  }

#endif
