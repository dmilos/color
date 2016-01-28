#ifndef color_yuv_make_blue
#define color_yuv_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.114, 0.436, -0.100014 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1d, 0xff, 0x6a } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1d2e, 0xffff, 0x6b2e } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1d2f1a9f, 0xffffffff, 0x6b2f1c1e } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1d2f1a9fbe76c900ull, 0x0000000000000000ull, 0x6b2f1c1ead19ec00ull } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.114, 0.436, -0.100014 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.114, 0.436, -0.100014 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.114, 0.436, -0.100014 } );
       }

    }
  }

#endif
