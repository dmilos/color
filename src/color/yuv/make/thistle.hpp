#ifndef color_yuv_make_thistle
#define color_yuv_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5d;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8a18;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8987c9u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8a81884fca1cul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.78951, 0.0283198, 0.0504888 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.78951, 0.0283198, 0.0504888 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.78951, 0.0283198, 0.0504888 } );
       }

    }
  }

#endif
