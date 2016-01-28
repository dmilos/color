#ifndef color_hsv_make_violet
#define color_hsv_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 45.3782, 93.3333 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0x73, 0xee } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0x742a, 0xeeee } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0x742b0673, 0xeeeeeeee } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x742b06742b067800ull, 0xeeeeeeeeeeeef000ull } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 45.3782, 93.3333 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 45.3782, 93.3333 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 45.3782, 93.3333 } );
       }

    }
  }

#endif
