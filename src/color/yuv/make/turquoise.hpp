#ifndef color_yuv_make_turquoise
#define color_yuv_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.683671, 0.0649648, -0.379607 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xae, 0x92, 0x30 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xaf04, 0x9311, 0x30fd } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xaf050921, 0x93127e8e, 0x30fe0c4a } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xaf050921b529e800ull, 0x93127e8ebcf7e800ull, 0x30fe0c4a5f8dee00ull } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.683671, 0.0649648, -0.379607 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.683671, 0.0649648, -0.379607 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.683671, 0.0649648, -0.379607 } );
       }

    }
  }

#endif
