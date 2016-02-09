#ifndef color_xyz_make_green
#define color_xyz_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6;
       }

      inline
      void green( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4fb;
       }

      inline
      void green( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0749dfu;
       }

      inline
      void green( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff073b4b96e037ul;
       }

      inline
      void green( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 4.94917f, 12.97f, 0.159651f } );
       }

      inline
      void green( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 4.94917, 12.97, 0.159651 } );
       }

      inline
      void green( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 4.94917, 12.97, 0.159651 } );
       }

    }
  }

#endif
