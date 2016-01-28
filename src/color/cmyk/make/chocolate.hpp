#ifndef color_cmyk_make_chocolate
#define color_cmyk_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.857143 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x7f, 0xda, 0x2d } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x7fff, 0xdb6c, 0x2d2d } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x7fffffff, 0xdb6db6da, 0x2d2d2d2d } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x8000000000000000ull, 0xdb6db6db6db6d800ull, 0x2d2d2d2d2d2d3000ull } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.5, 0.857143, 0.176471 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.5, 0.857143, 0.176471 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.5, 0.857143, 0.176471 } );
       }

    }
  }

#endif
