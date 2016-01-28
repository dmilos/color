#ifndef color_yiq_make_gold
#define color_yiq_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.793922, 0.364315, -0.22916 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xca, 0xcd, 0x47 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xcb3d, 0xce46, 0x47de } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xcb3e71a4, 0xce4784df, 0x47df04c0 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xcb3e71a4d80b3800ull, 0xce4784e01a00d000ull, 0x47df04c0c6149800ull } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.793922, 0.364315, -0.22916 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.793922, 0.364315, -0.22916 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.793922, 0.364315, -0.22916 } );
       }

    }
  }

#endif
