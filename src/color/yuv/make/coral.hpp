#ifndef color_yuv_make_coral
#define color_yuv_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.62784, -0.156409, 0.326503 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xa0, 0x51, 0xc3 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xa0b9, 0x5214, 0xc3f3 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xa0ba1f4a, 0x5214f13a, 0xc3f47d36 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xa0ba1f4b1ee24800ull, 0x5214f13abc4bb800ull, 0xc3f47d379c8cf800ull } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.62784, -0.156409, 0.326503 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.62784, -0.156409, 0.326503 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.62784, -0.156409, 0.326503 } );
       }

    }
  }

#endif
