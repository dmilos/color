#ifndef color_yuv_make_navy
#define color_yuv_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.057, 0.218, -0.0500071 } ) - rgb(0,0,127) - #00007f

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0e, 0xbf, 0x75 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0e97, 0xbfff, 0x7597 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0e978d4f, 0xbfffffff, 0x75978e0e } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0e978d4fdf3b6480ull, 0xc000000000000000ull, 0x75978e0f568cf800ull } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.057, 0.218, -0.0500071 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.057, 0.218, -0.0500071 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.057, 0.218, -0.0500071 } );
       }

    }
  }

#endif
