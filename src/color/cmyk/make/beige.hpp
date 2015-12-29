#ifndef color_cmyk_make_beige
#define color_cmyk_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) 

      inline
      void beige( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x91a0000;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x100;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff1a0000u;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff1a1f00000000ul;
       }

      inline
      void beige( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0, 0.102041, 0.0392157 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0, 0.102041, 0.0392157 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0, 0.102041, 0.0392157 } );
       }

    }
  }

#endif
