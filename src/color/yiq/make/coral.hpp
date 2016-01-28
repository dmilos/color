#ifndef color_yiq_make_coral
#define color_yiq_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.62784, 0.358898, 0.0466126 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xa0, 0xcc, 0x8a } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xa0b9, 0xcd1c, 0x8b6a } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xa0ba1f4a, 0xcd1d9254, 0x8b6abfa9 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xa0ba1f4b1ee24000ull, 0xcd1d925581ee3000ull, 0x8b6abfaa5c19f800ull } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.62784, 0.358898, 0.0466126 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.62784, 0.358898, 0.0466126 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.62784, 0.358898, 0.0466126 } );
       }

    }
  }

#endif
