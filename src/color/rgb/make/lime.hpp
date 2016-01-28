#ifndef color_rgb_make_lime
#define color_rgb_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 0 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0xff, 0x00 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0xffff, 0x0000 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0xffffffff, 0x00000000 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 1, 1, 1 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 1, 0 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 1, 0 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 1, 0 } );
       }

    }
  }

#endif
