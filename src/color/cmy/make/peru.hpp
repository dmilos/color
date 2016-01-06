#ifndef color_cmy_make_peru
#define color_cmy_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x99;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbdc6;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc07931u;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffc0c07a793231ul;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.196078, 0.478431, 0.752941 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.196078, 0.478431, 0.752941 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.196078, 0.478431, 0.752941 } );
       }

    }
  }

#endif
