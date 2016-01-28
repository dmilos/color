#ifndef color_cmyk_make_thistle
#define color_cmyk_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.115741, 0 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x1d, 0x00, 0x27 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x1da1, 0x0000, 0x2727 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x1da12f68, 0x00000000, 0x27272727 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x1da12f684bda1200ull, 0x0000000000000000ull, 0x2727272727272800ull } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.115741, 0, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.115741, 0, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.115741, 0, 0.152941 } );
       }

    }
  }

#endif
