#ifndef color_cmy_make_beige
#define color_cmy_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2021;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff220909u;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff23220a090a09ul;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0392157, 0.0392157, 0.137255 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0392157, 0.0392157, 0.137255 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0392157, 0.0392157, 0.137255 } );
       }

    }
  }

#endif
