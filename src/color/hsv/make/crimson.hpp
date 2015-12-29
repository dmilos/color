#ifndef color_hsv_make_crimson
#define color_hsv_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) 

      inline
      void crimson( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb6;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdb9d;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdce7f6u;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdcdce8b9f776ul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.966667, 0.909091, 0.862745 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.966667, 0.909091, 0.862745 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.966667, 0.909091, 0.862745 } );
       }

    }
  }

#endif
