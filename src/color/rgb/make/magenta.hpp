#ifndef color_rgb_make_magenta
#define color_rgb_make_magenta

// ::color::make::magenta( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0, 1 } ) 

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0x00, 0xff } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0x0000, 0xffff } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0x00000000, 0xffffffff } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array<float,3>( { 1, 0, 1 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array<double,3>( { 1, 0, 1 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       { // Same as Fuchsia 
        color_parameter.container() = std::array<long double,3>( { 1, 0, 1 } );
       }

    }
  }

#endif
