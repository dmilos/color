#ifndef color_hsv_make_magenta
#define color_hsv_make_magenta

// ::color::make::magenta( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #ff00ff

      inline
      void magenta( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xfd;
       }

      inline
      void magenta( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfff9;
       }

      inline
      void magenta( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffffd4u;
       }

      inline
      void magenta( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffffffd554ul;
       }

      inline
      void magenta( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 100, 100 } );
       }

      inline
      void magenta( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 100, 100 } );
       }

      inline
      void magenta( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 100, 100 } );
       }

    }
  }

#endif
