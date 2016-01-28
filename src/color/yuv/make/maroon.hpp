#ifndef color_yuv_make_maroon
#define color_yuv_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.1495, -0.0735688, 0.3075 } ) - rgb(127,0,0) - #7f0000

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x26, 0x69, 0xbf } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2645, 0x6a66, 0xbfff } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2645a1ca, 0x6a66dcbf, 0xbfffffff } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2645a1cac0831200ull, 0x6a66dcbfdb040c00ull, 0xc000000000000000ull } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.1495, -0.0735688, 0.3075 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.1495, -0.0735688, 0.3075 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.1495, -0.0735688, 0.3075 } );
       }

    }
  }

#endif
