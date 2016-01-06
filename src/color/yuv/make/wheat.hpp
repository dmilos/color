#ifndef color_yuv_make_wheat
#define color_yuv_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x56;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8d9b;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8e66dfu;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8f0d6684e0d9ul;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.878333, -0.0867928, 0.0723357 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.878333, -0.0867928, 0.0723357 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.878333, -0.0867928, 0.0723357 } );
       }

    }
  }

#endif
