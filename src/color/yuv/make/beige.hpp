#ifndef color_yuv_make_beige
#define color_yuv_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void beige( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x81bd;
       }

      inline
      void beige( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8172f2u;
       }

      inline
      void beige( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff82097372f318ul;
       }

      inline
      void beige( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.949608, -0.0427451, 0.00980532 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.949608, -0.0427451, 0.00980532 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.949608, -0.0427451, 0.00980532 } );
       }

    }
  }

#endif
