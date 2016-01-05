#ifndef color_cmyk_make_violet
#define color_cmyk_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) 

      inline
      void violet( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x60;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x10007300u;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x11100000742a0000ul;
       }

      inline
      void violet( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.453782, 0, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.453782, 0, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.453782, 0, 0.0666667 } );
       }

    }
  }

#endif
