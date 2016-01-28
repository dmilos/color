#ifndef color_rgb_make_thistle
#define color_rgb_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd8, 0xbf, 0xd8 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd8d8, 0xbfbf, 0xd8d8 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd8d8d8d8, 0xbfbfbfbf, 0xd8d8d8d8 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } );
       }

    }
  }

#endif
