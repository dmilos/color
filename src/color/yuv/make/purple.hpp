#ifndef color_yuv_make_purple
#define color_yuv_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.2065, 0.144431, 0.257493 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x34, 0xa9, 0xb4 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x34dc, 0xaa66, 0xb596 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x34dd2f1a, 0xaa66dcbf, 0xb5978e0e } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x34dd2f1a9fbe7600ull, 0xaa66dcbfdb041000ull, 0xb5978e0f568cf800ull } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2065, 0.144431, 0.257493 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2065, 0.144431, 0.257493 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2065, 0.144431, 0.257493 } );
       }

    }
  }

#endif
