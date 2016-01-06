#ifndef color_cmy_make_chocolate
#define color_cmy_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa1;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xde45;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe1962du;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe1e196962d2dul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.176471, 0.588235, 0.882353 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.176471, 0.588235, 0.882353 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.176471, 0.588235, 0.882353 } );
       }

    }
  }

#endif
