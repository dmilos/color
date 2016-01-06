#ifndef color_hsv_make_peru
#define color_hsv_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa0;
       }

      inline
      void peru( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcaa2;
       }

      inline
      void peru( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffcdb014u;
       }

      inline
      void peru( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffcdcdb1521508ul;
       }

      inline
      void peru( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.5775, 69.2683, 80.3922 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.5775, 69.2683, 80.3922 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.5775, 69.2683, 80.3922 } );
       }

    }
  }

#endif
