#ifndef color_yuv_make_ivory
#define color_yuv_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.993294, -0.0256471, 0.00588319 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfd, 0x77, 0x80 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfe47, 0x7877, 0x8138 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfe4885f5, 0x78787877, 0x813976d0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xfe4885f69a718000ull, 0x7878787878787400ull, 0x813976d104e05800ull } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.993294, -0.0256471, 0.00588319 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.993294, -0.0256471, 0.00588319 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.993294, -0.0256471, 0.00588319 } );
       }

    }
  }

#endif
