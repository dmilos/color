#ifndef color_yuv_make_cyan
#define color_yuv_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.701, 0.147138, -0.615 } ) - rgb(0,255,255) - #00ffff

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb2, 0xaa, 0x00 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb374, 0xab31, 0x0000 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb374bc69, 0xab32467f, 0x00000000 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb374bc6a7ef9e000ull, 0xab32468049f7e800ull, 0xfffffffffffffd26ull } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.701, 0.147138, -0.615 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.701, 0.147138, -0.615 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.701, 0.147138, -0.615 } );
       }

    }
  }

#endif
