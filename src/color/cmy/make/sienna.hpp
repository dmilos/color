#ifndef color_cmy_make_sienna
#define color_cmy_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa2;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xceab;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd2ad5fu;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd2d2adad5f5ful;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.372549, 0.678431, 0.823529 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.372549, 0.678431, 0.823529 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.372549, 0.678431, 0.823529 } );
       }

    }
  }

#endif
