#ifndef color_rgb_make_sienna
#define color_rgb_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xa0, 0x52, 0x2d } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xa0a0, 0x5252, 0x2d2d } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xa0a0a0a0, 0x52525252, 0x2d2d2d2d } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } );
       }

    }
  }

#endif
