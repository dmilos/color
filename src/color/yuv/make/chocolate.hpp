#ifndef color_yuv_make_chocolate
#define color_yuv_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x8b;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb50f;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffba487fu;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbad348908058ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.501353, -0.188821, 0.282651 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.501353, -0.188821, 0.282651 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.501353, -0.188821, 0.282651 } );
       }

    }
  }

#endif
