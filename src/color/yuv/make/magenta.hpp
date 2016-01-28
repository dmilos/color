#ifndef color_yuv_make_magenta
#define color_yuv_make_magenta

// ::color::make::magenta( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.413, 0.288862, 0.514986 } ) - rgb(255,0,255) - #ff00ff

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x69, 0xd3, 0xea } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x69b9, 0xd4cc, 0xeb2e } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x69ba5e34, 0xd4cdb97e, 0xeb2f1c1d } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x69ba5e353f7cec00ull, 0xd4cdb97fb6081800ull, 0xeb2f1c1ead19f000ull } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.413, 0.288862, 0.514986 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.413, 0.288862, 0.514986 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.413, 0.288862, 0.514986 } );
       }

    }
  }

#endif
