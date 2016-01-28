#ifndef color_yuv_make_yellow
#define color_yuv_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.886, -0.436, 0.100014 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe1, 0x00, 0x94 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe2d0, 0x0000, 0x94d0 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe2d0e55f, 0x00000000, 0x94d0e3e0 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe2d0e56041894000ull, 0xfffffffffffffaecull, 0x94d0e3e152e60800ull } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.886, -0.436, 0.100014 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.886, -0.436, 0.100014 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.886, -0.436, 0.100014 } );
       }

    }
  }

#endif
