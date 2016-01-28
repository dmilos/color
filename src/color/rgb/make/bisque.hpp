#ifndef color_rgb_make_bisque
#define color_rgb_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3>( { 0xff, 0xe4, 0xc4 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3>( { 0xffff, 0xe4e4, 0xc4c4 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3>( { 0xffffffff, 0xe4e4e4e4, 0xc4c4c4c4 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } );
       }

    }
  }

#endif
