#ifndef color_cmyk_make_linen
#define color_cmyk_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.980392, 0.941176, 0.901961 } ) 

      inline
      void linen( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x100;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x5140a00u;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x505147a0a3d0000ul;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.04, 0.08, 0.0196078 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.04, 0.08, 0.0196078 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.04, 0.08, 0.0196078 } );
       }

    }
  }

#endif
