#ifndef color_xyz_make_sienna
#define color_xyz_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xf1;
       }

      inline
      void sienna( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfc2d;
       }

      inline
      void sienna( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff001b7du;
       }

      inline
      void sienna( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff015f1d3d7ffful;
       }

      inline
      void sienna( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 14.1269, 11.9469, 5.68106 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 14.1269, 11.9469, 5.68106 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 14.1269, 11.9469, 5.68106 } );
       }

    }
  }

#endif
