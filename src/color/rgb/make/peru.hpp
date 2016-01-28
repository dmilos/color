#ifndef color_rgb_make_peru
#define color_rgb_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xcd, 0x85, 0x3f } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xcdcd, 0x8585, 0x3f3f } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xcdcdcdcd, 0x85858585, 0x3f3f3f3f } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } );
       }

    }
  }

#endif
