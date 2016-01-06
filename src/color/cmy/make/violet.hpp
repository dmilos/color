#ifndef color_cmy_make_violet
#define color_cmy_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x18;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x11e2;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff107d10u;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff11107d7d1110ul;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0666667, 0.490196, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0666667, 0.490196, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0666667, 0.490196, 0.0666667 } );
       }

    }
  }

#endif
