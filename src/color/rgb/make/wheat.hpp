#ifndef color_rgb_make_wheat
#define color_rgb_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 245.0/255.0, 222.0/255.0, 179.0/255.0 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf5, 0xde, 0xb3 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf5f5, 0xdede, 0xb3b3 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf5f5f5f5, 0xdededede, 0xb3b3b3b3 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 245.0/255.0, 222.0/255.0, 179.0/255.0 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 245.0/255.0, 222.0/255.0, 179.0/255.0 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 245.0/255.0, 222.0/255.0, 179.0/255.0 } );
       }

    }
  }

#endif
