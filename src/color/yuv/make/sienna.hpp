#ifndef color_yuv_make_sienna
#define color_yuv_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.396486, -0.10827, 0.20263 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x65, 0x5f, 0xa9 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x657f, 0x6036, 0xaa2b } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x65801fdd, 0x6036e569, 0xaa2c5d4c } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x65801fde551dd400ull, 0x6036e56a53ca4000ull, 0xaa2c5d4cddd91800ull } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.396486, -0.10827, 0.20263 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.396486, -0.10827, 0.20263 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.396486, -0.10827, 0.20263 } );
       }

    }
  }

#endif
