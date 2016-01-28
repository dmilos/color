#ifndef color_yuv_make_red
#define color_yuv_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.299, -0.147138, 0.615 } ) - rgb(255,0,0) - #ff0000

      inline
      void red( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4c, 0x54, 0xff } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4c8a, 0x54cd, 0xffff } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4c8b4395, 0x54cdb97f, 0xffffffff } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4c8b439581062400ull, 0x54cdb97fb6081800ull, 0x0000000000000000ull } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.299, -0.147138, 0.615 } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.299, -0.147138, 0.615 } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.299, -0.147138, 0.615 } );
       }

    }
  }

#endif
