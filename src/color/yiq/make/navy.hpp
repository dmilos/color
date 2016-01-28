#ifndef color_yiq_make_navy
#define color_yiq_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.057, -0.160632, 0.155567 } ) - rgb(0,0,127) - #00007f

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0e, 0x5d, 0xa5 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0e97, 0x5d7b, 0xa619 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0e978d4f, 0x5d7c4903, 0xa61a87a9 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0e978d4fdf3b6480ull, 0x5d7c49040864bc00ull, 0xa61a87a9a6ffc000ull } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.057, -0.160632, 0.155567 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.057, -0.160632, 0.155567 } );
       }

      inline
      void navy( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.057, -0.160632, 0.155567 } );
       }

    }
  }

#endif
