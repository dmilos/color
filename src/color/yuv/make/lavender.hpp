#ifndef color_yuv_make_lavender
#define color_yuv_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.910902, 0.0341961, -0.00784426 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe8, 0x89, 0x7d } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe92f, 0x8a09, 0x7e5d } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe930def2, 0x8a0a0a09, 0x7e5e0c3e } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe930def36e4fa000ull, 0x8a0a0a0a0a0a0000ull, 0x7e5e0c3ea42a2c00ull } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.910902, 0.0341961, -0.00784426 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.910902, 0.0341961, -0.00784426 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.910902, 0.0341961, -0.00784426 } );
       }

    }
  }

#endif
