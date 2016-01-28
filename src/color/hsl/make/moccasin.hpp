#ifndef color_hsl_make_moccasin
#define color_hsl_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 38.1081, 100, 85.4902 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1a, 0xff, 0xda } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1b19, 0xffff, 0xdada } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1b195e8e, 0xffffffff, 0xdadadada } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1b195e8efdb19700ull, 0x0000000000000000ull, 0xdadadadadadae000ull } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 38.1081, 100, 85.4902 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 38.1081, 100, 85.4902 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 38.1081, 100, 85.4902 } );
       }

    }
  }

#endif
