#ifndef color_yuv_make_tomato
#define color_yuv_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.558635, -0.137888, 0.387217 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x8e, 0x57, 0xcf } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x8f02, 0x5784, 0xd096 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x8f02b8fe, 0x5784e1eb, 0xd097705c } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x8f02b8fea06b3000ull, 0x5784e1ebbeab9800ull, 0xd097705d02133800ull } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.558635, -0.137888, 0.387217 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.558635, -0.137888, 0.387217 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.558635, -0.137888, 0.387217 } );
       }

    }
  }

#endif
