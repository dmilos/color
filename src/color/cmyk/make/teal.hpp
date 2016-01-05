#ifndef color_cmyk_make_teal
#define color_cmyk_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0.5, 0.5 } ) 

      inline
      void teal( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x43;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x700f;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x7f0000ffu;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x7fff00000000fffful;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 1, 0, 0, 0.5 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 1, 0, 0, 0.5 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 1, 0, 0, 0.5 } );
       }

    }
  }

#endif
