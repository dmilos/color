#ifndef color_yuv_make_pink
#define color_yuv_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.574698, -0.161231, 0.201102 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x92, 0x50, 0xa9 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x931e, 0x50aa, 0xa9da } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x931f6f4e, 0x50aa84e2, 0xa9dafa0b } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x931f6f4f20d81800ull, 0x50aa84e2e932a800ull, 0xa9dafa0bb2538800ull } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.574698, -0.161231, 0.201102 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.574698, -0.161231, 0.201102 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.574698, -0.161231, 0.201102 } );
       }

    }
  }

#endif
