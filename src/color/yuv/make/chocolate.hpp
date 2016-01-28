#ifndef color_yuv_make_chocolate
#define color_yuv_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.501353, -0.188821, 0.282651 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7f, 0x48, 0xba } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x8058, 0x4890, 0xbad3 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x8058aa95, 0x4890f207, 0xbad406c9 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x8058aa961b39f000ull, 0x4890f20769126400ull, 0xbad406c9cd168000ull } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.501353, -0.188821, 0.282651 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.501353, -0.188821, 0.282651 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.501353, -0.188821, 0.282651 } );
       }

    }
  }

#endif
