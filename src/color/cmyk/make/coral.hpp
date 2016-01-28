#ifndef color_cmyk_make_coral
#define color_cmyk_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.69 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x7f, 0xaf, 0x00 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x7fff, 0xb0a3, 0x0000 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x7fffffff, 0xb0a3d709, 0x00000000 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x8000000000000000ull, 0xb0a3d70a3d70a000ull, 0x0000000000000000ull } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.5, 0.69, 0 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.5, 0.69, 0 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.5, 0.69, 0 } );
       }

    }
  }

#endif
