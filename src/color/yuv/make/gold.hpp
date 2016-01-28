#ifndef color_yuv_make_gold
#define color_yuv_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.793922, -0.390688, 0.180796 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xca, 0x0d, 0xa4 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xcb3d, 0x0d4d, 0xa5a0 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xcb3e71a4, 0x0d4d726e, 0xa5a11072 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xcb3e71a4d80b4000ull, 0x0d4d726e62d41680ull, 0xa5a11072af4e8800ull } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.793922, -0.390688, 0.180796 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.793922, -0.390688, 0.180796 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.793922, -0.390688, 0.180796 } );
       }

    }
  }

#endif
