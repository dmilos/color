#ifndef color_cmyk_make_bisque
#define color_cmyk_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.894118, 0.768627 } ) 

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3a1a00;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x310;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3a1a00u;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3b3a1b1a0000ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.105882, 0.231373, 0 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.105882, 0.231373, 0 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.105882, 0.231373, 0 } );
       }

    }
  }

#endif
