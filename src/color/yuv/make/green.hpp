#ifndef color_yuv_make_green
#define color_yuv_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x12;
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4949;
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff4a554au;
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff4a6855984b22ul;
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2935, -0.144431, -0.257493 } );
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2935, -0.144431, -0.257493 } );
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2935, -0.144431, -0.257493 } );
       }

    }
  }

#endif
