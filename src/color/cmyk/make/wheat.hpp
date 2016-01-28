#ifndef color_cmyk_make_wheat
#define color_cmyk_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.0938776, 0.269388 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x17, 0x44, 0x09 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x1808, 0x44f6, 0x0a09 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x18085bf3, 0x44f6988d, 0x0a0a0a09 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x18085bf37612d000ull, 0x44f6988e1b2adc00ull, 0x0a0a0a0a0a0a0800ull } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.0938776, 0.269388, 0.0392157 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.0938776, 0.269388, 0.0392157 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.0938776, 0.269388, 0.0392157 } );
       }

    }
  }

#endif
