#ifndef color_xyz_make_bisque
#define color_xyz_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.768627 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x64;
       }

      inline
      void bisque( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4be1;
       }

      inline
      void bisque( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff55212eu;
       }

      inline
      void bisque( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff59ac268f3421ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.4045, 29.105, 24.5824 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.4045, 29.105, 24.5824 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.4045, 29.105, 24.5824 } );
       }

    }
  }

#endif
