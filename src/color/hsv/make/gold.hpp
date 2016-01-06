#ifndef color_hsv_make_gold
#define color_hsv_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xf8;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffe4;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffff23u;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffffff23f9ul;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 50.5882, 100, 100 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 50.5882, 100, 100 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 50.5882, 100, 100 } );
       }

    }
  }

#endif
