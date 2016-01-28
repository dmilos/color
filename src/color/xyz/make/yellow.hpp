#ifndef color_xyz_make_yellow
#define color_xyz_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3f;
       }

      inline
      void yellow( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdac;
       }

      inline
      void yellow( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0e9180u;
       }

      inline
      void yellow( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0e77972c853dul;
       }

      inline
      void yellow( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 25.5441, 31.5907, 0.319301 } );
       }

      inline
      void yellow( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 25.5441, 31.5907, 0.319301 } );
       }

      inline
      void yellow( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 25.5441, 31.5907, 0.319301 } );
       }

    }
  }

#endif
