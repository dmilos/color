#ifndef color_xyz_make_maroon
#define color_xyz_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0 } ) - rgb(127,0,0) - #7f0000

      inline
      void maroon( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x19;
       }

      inline
      void maroon( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x1ea;
       }

      inline
      void maroon( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff007f61u;
       }

      inline
      void maroon( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff00007fff6267ul;
       }

      inline
      void maroon( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 7.82288, 2.82534, 0 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 7.82288, 2.82534, 0 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 7.82288, 2.82534, 0 } );
       }

    }
  }

#endif
