#ifndef color_yuv_make_gainsboro
#define color_yuv_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.86, -5.55112e-17, -1.11022e-16 } ) - rgb(219,219,219) - #dbdbdb

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdb, 0x7f, 0x7f } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdc28, 0x7fff, 0x7fff } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdc28f5c1, 0x7fffffff, 0x7fffffff } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xdc28f5c28f5c3000ull, 0x7ffffffffffffc00ull, 0x7ffffffffffffc00ull } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.86, -5.55112e-17, -1.11022e-16 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.86, -5.55112e-17, -1.11022e-16 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.86, -5.55112e-17, -1.11022e-16 } );
       }

    }
  }

#endif
