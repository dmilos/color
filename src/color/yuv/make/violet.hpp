#ifndef color_yuv_make_violet
#define color_yuv_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.684722, 0.122342, 0.218112 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xae, 0xa3, 0xac } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xaf49, 0xa3ea, 0xad64 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xaf49e9a7, 0xa3eab4f6, 0xad654521 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xaf49e9a81ee7a000ull, 0xa3eab4f6d7a30800ull, 0xad654522131a0800ull } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.684722, 0.122342, 0.218112 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.684722, 0.122342, 0.218112 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.684722, 0.122342, 0.218112 } );
       }

    }
  }

#endif
