#ifndef color_hsv_make_turquoise
#define color_hsv_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) 

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xab;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdece;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe0b67bu;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe0e0b6da7bbbul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.483333, 0.714286, 0.878431 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.483333, 0.714286, 0.878431 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.483333, 0.714286, 0.878431 } );
       }

    }
  }

#endif
