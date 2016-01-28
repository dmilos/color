#ifndef color_hsl_make_linen
#define color_hsl_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 30, 66.6667, 94.1176 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x15, 0xa9, 0xf0 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1555, 0xaaa9, 0xf0f0 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x15555555, 0xaaaaaaa9, 0xf0f0f0f0 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1555555555555500ull, 0xaaaaaaaaaaaa8000ull, 0xf0f0f0f0f0f0f000ull } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 30, 66.6667, 94.1176 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 30, 66.6667, 94.1176 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 30, 66.6667, 94.1176 } );
       }

    }
  }

#endif
