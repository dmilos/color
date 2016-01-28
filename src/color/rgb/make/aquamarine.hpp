#ifndef color_rgb_make_aquamarine
#define color_rgb_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 212.0/255.0 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7f, 0xff, 0xd4 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7fff, 0xffff, 0xd4d4 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x7fffffff, 0xffffffff, 0xd4d4d4d4 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0, 0, 0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 1, 212.0/255.0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 1, 212.0/255.0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 1, 212.0/255.0 } );
       }

    }
  }

#endif
