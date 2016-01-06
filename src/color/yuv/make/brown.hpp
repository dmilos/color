#ifndef color_yuv_make_brown
#define color_yuv_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x92;
       }

      inline
      void brown( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb989;
       }

      inline
      void brown( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbd6a4eu;
       }

      inline
      void brown( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbdbd6b294f15ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.308929, -0.0709723, 0.296647 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.308929, -0.0709723, 0.296647 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.308929, -0.0709723, 0.296647 } );
       }

    }
  }

#endif
