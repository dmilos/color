#ifndef color_cmyk_make_orange
#define color_cmyk_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.35, 1 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x59, 0xff, 0x00 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x5999, 0xffff, 0x0000 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x59999999, 0xffffffff, 0x00000000 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x5999999999999800ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.35, 1, 0 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.35, 1, 0 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.35, 1, 0 } );
       }

    }
  }

#endif
