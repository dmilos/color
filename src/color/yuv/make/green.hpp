#ifndef color_yuv_make_green
#define color_yuv_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.2935, -0.144431, -0.257493 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4a, 0x55, 0x4a } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4b22, 0x5598, 0x4a68 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4b22d0e5, 0x5599233f, 0x4a6871f0 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4b22d0e560418c00ull, 0x5599234024fbf400ull, 0x4a6871f0a9730800ull } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2935, -0.144431, -0.257493 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2935, -0.144431, -0.257493 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2935, -0.144431, -0.257493 } );
       }

    }
  }

#endif
