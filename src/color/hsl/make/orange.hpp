#ifndef color_hsl_make_orange
#define color_hsl_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 39, 100, 50 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1b, 0xff, 0x7f } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1bbb, 0xffff, 0x7fff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1bbbbbbb, 0xffffffff, 0x7fffffff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1bbbbbbbbbbbbc00ull, 0x0000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 39, 100, 50 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 39, 100, 50 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 39, 100, 50 } );
       }

    }
  }

#endif
