#ifndef color_yuv_make_crimson
#define color_yuv_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9a;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xddaa;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe07154u;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe11f723254b0ul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.330824, -0.04701, 0.466664 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.330824, -0.04701, 0.466664 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.330824, -0.04701, 0.466664 } );
       }

    }
  }

#endif
