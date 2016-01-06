#ifndef color_yuv_make_purple
#define color_yuv_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0.5 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa1;
       }

      inline
      void purple( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb286;
       }

      inline
      void purple( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb4a934u;
       }

      inline
      void purple( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb596aa6634dcul;
       }

      inline
      void purple( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2065, 0.144431, 0.257493 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2065, 0.144431, 0.257493 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2065, 0.144431, 0.257493 } );
       }

    }
  }

#endif
