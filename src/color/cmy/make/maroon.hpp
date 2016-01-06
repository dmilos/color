#ifndef color_cmy_make_maroon
#define color_cmy_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0 } ) - rgb(127,0,0) - #7f0000

      inline
      void maroon( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xfb;
       }

      inline
      void maroon( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffef;
       }

      inline
      void maroon( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffff7fu;
       }

      inline
      void maroon( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffffff7ffful;
       }

      inline
      void maroon( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 1, 1 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 1, 1 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 1, 1 } );
       }

    }
  }

#endif
