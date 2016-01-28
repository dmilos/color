#ifndef color_hsl_make_sienna
#define color_hsl_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 19.3043, 56.0976, 40.1961 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0d, 0x8f, 0x66 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0dba, 0x8f9b, 0x66e6 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0dba3fd0, 0x8f9c18f9, 0x66e6e6e6 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0dba3fd08298dc00ull, 0x8f9c18f9c18f9800ull, 0x66e6e6e6e6e6e800ull } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 19.3043, 56.0976, 40.1961 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 19.3043, 56.0976, 40.1961 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 19.3043, 56.0976, 40.1961 } );
       }

    }
  }

#endif
