#ifndef color_hsv_make_tomato
#define color_hsv_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xe8;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfec0;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffb806u;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffb8b8067eul;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 9.13043, 72.1569, 100 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 9.13043, 72.1569, 100 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 9.13043, 72.1569, 100 } );
       }

    }
  }

#endif
