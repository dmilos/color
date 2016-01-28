#ifndef color_cmyk_make_aquamarine
#define color_cmyk_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0.168627 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x7f, 0x00, 0x2a, 0x00 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x7fff, 0x0000, 0x2b2a, 0x0000 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x7fffffff, 0x00000000, 0x2b2b2b2a, 0x00000000 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x8000000000000000ull, 0x0000000000000000ull, 0x2b2b2b2b2b2b2800ull, 0x0000000000000000ull } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.5, 0, 0.168627, 0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.5, 0, 0.168627, 0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.5, 0, 0.168627, 0 } );
       }

    }
  }

#endif
