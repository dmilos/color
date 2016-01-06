#ifndef color_xyz_make_gainsboro
#define color_xyz_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.86, 0.86, 0.86 } ) - rgb(219,219,219) - #dbdbdb

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x92;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcad6;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd7d7d7u;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdc08dc08dc08ul;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 27.4599, 27.4599, 27.4599 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 27.4599, 27.4599, 27.4599 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 27.4599, 27.4599, 27.4599 } );
       }

    }
  }

#endif
