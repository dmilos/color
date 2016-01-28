#ifndef color_hsl_make_ivory
#define color_hsl_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 100, 97.0588 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0xff, 0xf7 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0xffff, 0xf877 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0xffffffff, 0xf8787877 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x0000000000000000ull, 0xf878787878787800ull } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 100, 97.0588 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 100, 97.0588 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 100, 97.0588 } );
       }

    }
  }

#endif
