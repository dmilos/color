#ifndef color_rgb_make_turquoise
#define color_rgb_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x40, 0xe0, 0xd0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4040, 0xe0e0, 0xd0d0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x40404040, 0xe0e0e0e0, 0xd0d0d0d0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } );  
       }

    }
  }

#endif
