#ifndef color_xyz_make_tan
#define color_xyz_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x64;
       }

      inline
      void tan( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x13e0;
       }

      inline
      void tan( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff19141eu;
       }

      inline
      void tan( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff1c7418cc231aul;
       }

      inline
      void tan( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 23.3779, 23.1505, 17.5804 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 23.3779, 23.1505, 17.5804 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 23.3779, 23.1505, 17.5804 } );
       }

    }
  }

#endif
