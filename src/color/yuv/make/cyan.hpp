#ifndef color_yuv_make_cyan
#define color_yuv_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00ffff

      inline
      void cyan( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x24;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x295;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00aab2u;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0000ab31b374ul;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.701, 0.147138, -0.615 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.701, 0.147138, -0.615 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.701, 0.147138, -0.615 } );
       }

    }
  }

#endif
