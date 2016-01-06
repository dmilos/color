#ifndef color_hsv_make_orange
#define color_hsv_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.65, 0 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xf8;
       }

      inline
      void orange( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffe3;
       }

      inline
      void orange( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffff1bu;
       }

      inline
      void orange( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffffff1bbbul;
       }

      inline
      void orange( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 39, 100, 100 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 39, 100, 100 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 39, 100, 100 } );
       }

    }
  }

#endif
