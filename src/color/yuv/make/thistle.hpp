#ifndef color_yuv_make_thistle
#define color_yuv_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.78951, 0.0283198, 0.0504888 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xc9, 0x87, 0x89 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xca1c, 0x884f, 0x8a81 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xca1d5082, 0x88506784, 0x8a821bda } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xca1d5083b6ea2000ull, 0x88506784fdc49000ull, 0x8a821bdad9c14800ull } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.78951, 0.0283198, 0.0504888 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.78951, 0.0283198, 0.0504888 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.78951, 0.0283198, 0.0504888 } );
       }

    }
  }

#endif
