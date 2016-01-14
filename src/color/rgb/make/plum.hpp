#ifndef color_rgb_make_plum
#define color_rgb_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa6;
       }

      inline
      void plum( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd4f6;
       }

      inline
      void plum( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdda0ddu;
       }

      inline
      void plum( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdddda0a0ddddul;
       }

      inline
      void plum( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } );
       }

      inline
      void plum( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } );
       }

      inline
      void plum( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } );
       }

    }
  }

#endif
