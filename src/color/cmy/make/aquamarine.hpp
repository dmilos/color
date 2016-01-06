#ifndef color_cmy_make_aquamarine
#define color_cmy_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x280f;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff2a007fu;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff2b2a00007ffful;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 0, 0.168627 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 0, 0.168627 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 0, 0.168627 } );
       }

    }
  }

#endif
