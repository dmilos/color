#ifndef color_rgb_make_chocolate
#define color_rgb_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd2, 0x69, 0x1e } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd2d2, 0x6969, 0x1e1e } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd2d2d2d2, 0x69696969, 0x1e1e1e1e } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0, 0, 0 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } );
       }

    }
  }

#endif
