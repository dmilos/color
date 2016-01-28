#ifndef color_rgb_make_moccasin
#define color_rgb_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } )  - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0xe4, 0xb5 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0xe4e4, 0xb5b5 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0xe4e4e4e4, 0xb5b5b5b5 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } );
       }

    }
  }

#endif
