#ifndef color_yuv_make_crimson
#define color_yuv_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.330824, -0.04701, 0.466664 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x54, 0x71, 0xe0 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x54b0, 0x7232, 0xe11f } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x54b0d9cf, 0x7232ebd7, 0xe1207ce0 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x54b0d9cf92218000ull, 0x7232ebd79dd42400ull, 0xe1207ce1acb8c800ull } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.330824, -0.04701, 0.466664 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.330824, -0.04701, 0.466664 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.330824, -0.04701, 0.466664 } );
       }

    }
  }

#endif
