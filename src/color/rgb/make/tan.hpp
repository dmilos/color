#ifndef color_rgb_make_tan
#define color_rgb_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd2, 0xb4, 0x8c } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd2d2, 0xb4b4, 0x8c8c } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd2d2d2d2, 0xb4b4b4b4, 0x8c8c8c8c } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } );
       }

    }
  }

#endif
