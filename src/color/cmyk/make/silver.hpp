#ifndef color_cmyk_make_silver
#define color_cmyk_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.75, 0.75, 0.75 } ) 

      inline
      void silver( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3f000000;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3000;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff000000u;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff000000000000ul;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0, 0, 0.25 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0, 0, 0.25 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0, 0, 0.25 } );
       }

    }
  }

#endif
