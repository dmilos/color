#ifndef color_cmyk_make_crimson
#define color_cmyk_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.909091, 0.727273 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0xe7, 0xb9, 0x22 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0xe8b9, 0xba2d, 0x2322 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0xe8ba2e8a, 0xba2e8ba2, 0x23232322 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0xe8ba2e8ba2e8b800ull, 0xba2e8ba2e8ba3000ull, 0x2323232323232000ull } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.909091, 0.727273, 0.137255 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.909091, 0.727273, 0.137255 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.909091, 0.727273, 0.137255 } );
       }

    }
  }

#endif
