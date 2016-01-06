#ifndef color_yuv_make_snow
#define color_yuv_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.980392, 0.980392 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void snow( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x81fe;
       }

      inline
      void snow( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff827efbu;
       }

      inline
      void snow( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff82827f26fc7aul;
       }

      inline
      void snow( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.986255, -0.00288505, 0.0120588 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.986255, -0.00288505, 0.0120588 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.986255, -0.00288505, 0.0120588 } );
       }

    }
  }

#endif
