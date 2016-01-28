#ifndef color_rgb_make_orchid
#define color_rgb_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xda, 0x70, 0xd6 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdada, 0x7070, 0xd6d6 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdadadada, 0x70707070, 0xd6d6d6d6 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } );
       }

    }
  }

#endif
