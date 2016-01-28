#ifndef color_hsl_make_maroon
#define color_hsl_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 100, 25 } ) - rgb(127,0,0) - #7f0000

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0xff, 0x3f } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0xffff, 0x3fff } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0xffffffff, 0x3fffffff } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x0000000000000000ull, 0x4000000000000000ull } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 100, 25 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 100, 25 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 100, 25 } );
       }

    }
  }

#endif
