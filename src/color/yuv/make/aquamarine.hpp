#ifndef color_yuv_make_aquamarine
#define color_yuv_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1d;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x41f9;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff437fd3u;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff43828003d4cdul;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.831276, 4.72801e-05, -0.290635 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.831276, 4.72801e-05, -0.290635 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.831276, 4.72801e-05, -0.290635 } );
       }

    }
  }

#endif
