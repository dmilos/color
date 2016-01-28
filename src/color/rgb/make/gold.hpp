#ifndef color_rgb_make_gold
#define color_rgb_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0xd7, 0x00 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0xd7d7, 0x0000 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0xd7d7d7d7, 0x00000000 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } );
       }

    }
  }

#endif
