#ifndef color_cmy_make_lavender
#define color_cmy_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0980392, 0.0980392, 0.0196078 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x18, 0x18, 0x05 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1918, 0x1918, 0x0505 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x19191918, 0x19191918, 0x05050505 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1919191919191800ull, 0x1919191919191800ull, 0x0505050505050800ull } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0980392, 0.0980392, 0.0196078 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0980392, 0.0980392, 0.0196078 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0980392, 0.0980392, 0.0196078 } );
       }

    }
  }

#endif
