#ifndef color_cmyk_make_khaki
#define color_cmyk_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 0.901961, 0.54902 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x10;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x600;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xf6a0a00u;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xf0f6aaa0aaa0000ul;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.0416667, 0.416667, 0.0588235 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.0416667, 0.416667, 0.0588235 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.0416667, 0.416667, 0.0588235 } );
       }

    }
  }

#endif
