#ifndef color_cmy_make_sienna
#define color_cmy_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.372549, 0.678431, 0.823529 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x5f, 0xad, 0xd2 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x5f5f, 0xadad, 0xd2d2 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x5f5f5f5f, 0xadadadad, 0xd2d2d2d2 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x5f5f5f5f5f5f6000ull, 0xadadadadadadb000ull, 0xd2d2d2d2d2d2d000ull } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.372549, 0.678431, 0.823529 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.372549, 0.678431, 0.823529 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.372549, 0.678431, 0.823529 } );
       }

    }
  }

#endif
