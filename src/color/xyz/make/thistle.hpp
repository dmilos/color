#ifndef color_xyz_make_thistle
#define color_xyz_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb0;
       }

      inline
      void thistle( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb4cf;
       }

      inline
      void thistle( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc35198u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffc7e556199d59ul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 26.0763, 24.5036, 27.0154 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 26.0763, 24.5036, 27.0154 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 26.0763, 24.5036, 27.0154 } );
       }

    }
  }

#endif
