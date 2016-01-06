#ifndef color_yuv_make_blue
#define color_yuv_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 1 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x78;
       }

      inline
      void blue( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x6be3;
       }

      inline
      void blue( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff6aff1du;
       }

      inline
      void blue( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff6b2effff1d2eul;
       }

      inline
      void blue( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.114, 0.436, -0.100014 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.114, 0.436, -0.100014 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.114, 0.436, -0.100014 } );
       }

    }
  }

#endif
