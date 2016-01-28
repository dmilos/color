#ifndef color_yuv_make_snow
#define color_yuv_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.986255, -0.00288505, 0.0120588 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfb, 0x7e, 0x82 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfc7a, 0x7f26, 0x8282 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfc7b3384, 0x7f272bca, 0x82828282 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xfc7b338570f61800ull, 0x7f272bcb49d7fc00ull, 0x8282828282828000ull } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.986255, -0.00288505, 0.0120588 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.986255, -0.00288505, 0.0120588 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.986255, -0.00288505, 0.0120588 } );
       }

    }
  }

#endif
