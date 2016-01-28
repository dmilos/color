#ifndef color_cmyk_make_azure
#define color_cmyk_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0588235, 0, 0 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x0f, 0x00, 0x00, 0x00 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0f0f, 0x0000, 0x0000, 0x0000 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x0f0f0f0f, 0x00000000, 0x00000000, 0x00000000 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0f0f0f0f0f0f1000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.0588235, 0, 0, 0 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.0588235, 0, 0, 0 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.0588235, 0, 0, 0 } );
       }

    }
  }

#endif
