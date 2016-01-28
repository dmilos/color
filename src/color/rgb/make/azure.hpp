#ifndef color_rgb_make_azure
#define color_rgb_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 240.0/255.0, 1, 1 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf0, 0xff, 0xff } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf0f0, 0xffff, 0xffff } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf0f0f0f0, 0xffffffff, 0xffffffff } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0, 0, 0 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240.0/255.0, 1, 1 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240.0/255.0, 1, 1 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240.0/255.0, 1, 1 } );
       }

    }
  }

#endif
