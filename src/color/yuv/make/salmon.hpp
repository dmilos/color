#ifndef color_yuv_make_salmon
#define color_yuv_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.726247, 0.0691005, 0.123193 } ) - rgb(221,160,221) - #dda0dd

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb9, 0x93, 0x99 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb9ea, 0x9448, 0x99a3 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb9eb5646, 0x9449503f, 0x99a3dfc4 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb9eb56472bdaf000ull, 0x944950404c273000ull, 0x99a3dfc5083d3800ull } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.726247, 0.0691005, 0.123193 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.726247, 0.0691005, 0.123193 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.726247, 0.0691005, 0.123193 } );
       }

    }
  }

#endif
