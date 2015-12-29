#ifndef color_cmy_make_crimson
#define color_cmy_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) 

      inline
      void crimson( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb0;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc384;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc3eb22u;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffc3c3ebeb2322ul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.137255, 0.921569, 0.764706 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.137255, 0.921569, 0.764706 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.137255, 0.921569, 0.764706 } );
       }

    }
  }

#endif
