#ifndef color_cmyk_make_salmon
#define color_cmyk_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) 

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x1040;
       }

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x21004600u;
       }

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x2221000046a80000ul;
       }

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.276018, 0, 0.133333 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.276018, 0, 0.133333 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.276018, 0, 0.133333 } );
       }

    }
  }

#endif
