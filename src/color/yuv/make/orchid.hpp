#ifndef color_yuv_make_orchid
#define color_yuv_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa4;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xaa72;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffaca09bu;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffface0a13d9bedul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.609106, 0.113237, 0.215641 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.609106, 0.113237, 0.215641 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.609106, 0.113237, 0.215641 } );
       }

    }
  }

#endif
