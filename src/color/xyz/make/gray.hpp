#ifndef color_xyz_make_gray50
#define color_xyz_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0.5 } ) - rgb(127,127,127) - #7f7f7f

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1b;
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc6f7;
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd0d0d0u;
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd346d346d346ul;
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 15.9651, 15.9651, 15.9651 } );
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 15.9651, 15.9651, 15.9651 } );
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 15.9651, 15.9651, 15.9651 } );
       }

    }
  }

#endif
