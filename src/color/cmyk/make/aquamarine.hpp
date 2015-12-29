#ifndef color_cmyk_make_aquamarine
#define color_cmyk_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 1, 0.831373 } ) 

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2a007f;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x207;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff2a007fu;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff2b2a00007ffful;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.5, 0, 0.168627, 0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.5, 0, 0.168627, 0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.5, 0, 0.168627, 0 } );
       }

    }
  }

#endif
