#ifndef color_hsv_make_cyan
#define color_hsv_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 1 } ) 

      inline
      void cyan( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xfb;
       }

      inline
      void cyan( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffef;
       }

      inline
      void cyan( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffff7fu;
       }

      inline
      void cyan( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffffff7ffful;
       }

      inline
      void cyan( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 1, 1 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 1, 1 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 1, 1 } );
       }

    }
  }

#endif