#ifndef color_yuv_make_bisque
#define color_yuv_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.768627 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x56;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8dbc;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8f6ae8u;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff90296b5ce955ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.911471, -0.070293, 0.0776685 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.911471, -0.070293, 0.0776685 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.911471, -0.070293, 0.0776685 } );
       }

    }
  }

#endif
