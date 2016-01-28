#ifndef color_yiq_make_orange
#define color_yiq_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.68055, 0.417322, -0.128228 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xad, 0xd8, 0x60 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xae37, 0xd9aa, 0x6097 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xae388658, 0xd9ab3aad, 0x6097bd79 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xae3886594af4f000ull, 0xd9ab3aadf516a800ull, 0x6097bd797ecd5000ull } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.68055, 0.417322, -0.128228 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.68055, 0.417322, -0.128228 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.68055, 0.417322, -0.128228 } );
       }

    }
  }

#endif
