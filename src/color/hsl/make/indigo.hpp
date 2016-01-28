#ifndef color_hsl_make_indigo
#define color_hsl_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 274.615, 100, 25.4902 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xc2, 0xff, 0x41 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xc347, 0xffff, 0x4141 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xc3483482, 0xffffffff, 0x41414141 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xc348348348348000ull, 0x0000000000000000ull, 0x4141414141414000ull } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 274.615, 100, 25.4902 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 274.615, 100, 25.4902 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 274.615, 100, 25.4902 } );
       }

    }
  }

#endif
