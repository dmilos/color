#ifndef color_cmyk_make_khaki
#define color_cmyk_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.0416667, 0.416667 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x0a, 0x6a, 0x0f } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x0aaa, 0x6aaa, 0x0f0f } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x0aaaaaaa, 0x6aaaaaaa, 0x0f0f0f0f } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x0aaaaaaaaaaaa880ull, 0x6aaaaaaaaaaaa800ull, 0x0f0f0f0f0f0f1000ull } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.0416667, 0.416667, 0.0588235 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.0416667, 0.416667, 0.0588235 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.0416667, 0.416667, 0.0588235 } );
       }

    }
  }

#endif
