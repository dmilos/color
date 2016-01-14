#ifndef color_rgb_make_violet
#define color_rgb_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9e;
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xe3fa;
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffee82eeu;
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffffeeee8282eeeeul );
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 238/255.0, 130/255.0, 238/255.0 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 238/255.0, 130/255.0, 238/255.0 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 238/255.0, 130/255.0, 238/255.0 } );
       }

    }
  }

#endif
