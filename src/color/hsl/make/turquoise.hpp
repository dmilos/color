#ifndef color_hsl_make_turquoise
#define color_hsl_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 174, 72.0721, 56.4706 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7b, 0xb7, 0x90 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7bbb, 0xb880, 0x9090 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x7bbbbbbb, 0xb8812734, 0x90909090 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x7bbbbbbbbbbbb800ull, 0xb88127350b881000ull, 0x9090909090909000ull } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 174, 72.0721, 56.4706 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 174, 72.0721, 56.4706 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 174, 72.0721, 56.4706 } );
       }

    }
  }

#endif
