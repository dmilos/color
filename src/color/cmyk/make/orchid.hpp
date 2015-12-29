#ifndef color_cmyk_make_orchid
#define color_cmyk_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) 

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x25047b00;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2070;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff047b00u;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff04b27c790000ul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.486239, 0.0183486, 0.145098 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.486239, 0.0183486, 0.145098 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.486239, 0.0183486, 0.145098 } );
       }

    }
  }

#endif
