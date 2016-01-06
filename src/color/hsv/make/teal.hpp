#ifndef color_hsv_make_teal
#define color_hsv_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007f7f

      inline
      void teal( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7b;
       }

      inline
      void teal( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fef;
       }

      inline
      void teal( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff7fu;
       }

      inline
      void teal( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff7ffful;
       }

      inline
      void teal( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 180, 100, 50 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 180, 100, 50 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 180, 100, 50 } );
       }

    }
  }

#endif
