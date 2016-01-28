#ifndef color_hsl_make_gray50
#define color_hsl_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 50 } ) - rgb(127,127,127) - #7f7f7f

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x00, 0x7f } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x0000, 0x7fff } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x00000000, 0x7fffffff } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x0000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 50 } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 50 } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 50 } );
       }

    }
  }

#endif
