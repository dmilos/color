#ifndef color_cmy_make_violet
#define color_cmy_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0666667, 0.490196, 0.0666667 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x10, 0x7d, 0x10 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1110, 0x7d7d, 0x1110 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x11111110, 0x7d7d7d7d, 0x11111110 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1111111111111000ull, 0x7d7d7d7d7d7d8000ull, 0x1111111111111000ull } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0666667, 0.490196, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0666667, 0.490196, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0666667, 0.490196, 0.0666667 } );
       }

    }
  }

#endif
