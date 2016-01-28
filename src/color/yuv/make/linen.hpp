#ifndef color_yuv_make_linen
#define color_yuv_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.948431, -0.0228681, 0.0280398 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf1, 0x78, 0x85 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf2cb, 0x7948, 0x85d5 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf2cc65fe, 0x79495291, 0x85d5fee5 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xf2cc65ff9932d000ull, 0x794952918eaafc00ull, 0x85d5fee5b2efe800ull } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.948431, -0.0228681, 0.0280398 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.948431, -0.0228681, 0.0280398 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.948431, -0.0228681, 0.0280398 } );
       }

    }
  }

#endif
