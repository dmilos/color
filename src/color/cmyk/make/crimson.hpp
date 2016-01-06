#ifndef color_cmyk_make_crimson
#define color_cmyk_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x28;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2ad0;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x22b9e700u;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x2322ba2de8b90000ul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.909091, 0.727273, 0.137255 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.909091, 0.727273, 0.137255 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.909091, 0.727273, 0.137255 } );
       }

    }
  }

#endif
