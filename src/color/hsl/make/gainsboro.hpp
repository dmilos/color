#ifndef color_hsl_make_gainsboro
#define color_hsl_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 86 } ) - rgb(219,219,219) - #dbdbdb

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x00, 0xdb } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x0000, 0xdc28 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x00000000, 0xdc28f5c1 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x0000000000000000ull, 0xdc28f5c28f5c2800ull } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 86 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 86 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 86 } );
       }

    }
  }

#endif
