#ifndef color_hsl_make_yellow
#define color_hsl_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 100, 50 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0xff, 0x7f } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0xffff, 0x7fff } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0xffffffff, 0x7fffffff } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x0000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 100, 50 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 100, 50 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 100, 50 } );
       }

    }
  }

#endif
