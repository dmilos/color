#ifndef color_cmy_make_turquoise
#define color_cmy_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.74902, 0.121569, 0.184314 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xbf, 0x1f, 0x2f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xbfbf, 0x1f1f, 0x2f2f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xbfbfbfbf, 0x1f1f1f1f, 0x2f2f2f2f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xbfbfbfbfbfbfc000ull, 0x1f1f1f1f1f1f2000ull, 0x2f2f2f2f2f2f3000ull } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.74902, 0.121569, 0.184314 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.74902, 0.121569, 0.184314 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.74902, 0.121569, 0.184314 } );
       }

    }
  }

#endif
