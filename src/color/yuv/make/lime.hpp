#ifndef color_yuv_make_lime
#define color_yuv_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.587, -0.288862, -0.514986 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x95, 0x2b, 0x14 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x9645, 0x2b32, 0x14d0 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x9645a1ca, 0x2b324680, 0x14d0e3e1 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x9645a1cac0831800ull, 0x2b32468049f7e600ull, 0x14d0e3e152e60f00ull } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.587, -0.288862, -0.514986 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.587, -0.288862, -0.514986 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.587, -0.288862, -0.514986 } );
       }

    }
  }

#endif
