#ifndef color_hsl_make_lime
#define color_hsl_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 120, 100, 50 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x55, 0xff, 0x7f } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x5555, 0xffff, 0x7fff } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x55555555, 0xffffffff, 0x7fffffff } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x5555555555555400ull, 0x0000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 120, 100, 50 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 120, 100, 50 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 120, 100, 50 } );
       }

    }
  }

#endif
