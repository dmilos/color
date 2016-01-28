#ifndef color_yuv_make_khaki
#define color_yuv_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.873451, -0.159652, 0.0594168 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xde, 0x50, 0x8b } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdf99, 0x5120, 0x8c5d } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdf9a7bc2, 0x51212a69, 0x8c5dcdea } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xdf9a7bc371860800ull, 0x51212a696682d000ull, 0x8c5dcdeb22472000ull } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.873451, -0.159652, 0.0594168 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.873451, -0.159652, 0.0594168 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.873451, -0.159652, 0.0594168 } );
       }

    }
  }

#endif
