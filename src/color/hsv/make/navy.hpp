#ifndef color_hsv_make_navy
#define color_hsv_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0, 0.5 } ) 

      inline
      void navy( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7c;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7ff4;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fffaau;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffffaaaaul;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.666667, 1, 0.5 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.666667, 1, 0.5 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.666667, 1, 0.5 } );
       }

    }
  }

#endif
