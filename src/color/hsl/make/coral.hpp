#ifndef color_hsl_make_coral
#define color_hsl_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 16.5217, 100, 65.5 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0b, 0xff, 0xa7 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0bbf, 0xffff, 0xa7ad } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0bbfb0d9, 0xffffffff, 0xa7ae147a } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0bbfb0d9a96e1180ull, 0x0000000000000000ull, 0xa7ae147ae147b000ull } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 16.5217, 100, 65.5 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 16.5217, 100, 65.5 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 16.5217, 100, 65.5 } );
       }

    }
  }

#endif
