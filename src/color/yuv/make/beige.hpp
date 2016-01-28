#ifndef color_yuv_make_beige
#define color_yuv_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.949608, -0.0427451, 0.00980532 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf2, 0x72, 0x81 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf318, 0x7372, 0x8209 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf3197fe5, 0x73737372, 0x820a70b1 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xf3197fe64cb32000ull, 0x7373737373737000ull, 0x820a70b1b2cb4000ull } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.949608, -0.0427451, 0.00980532 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.949608, -0.0427451, 0.00980532 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.949608, -0.0427451, 0.00980532 } );
       }

    }
  }

#endif
