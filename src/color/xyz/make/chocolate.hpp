#ifndef color_xyz_make_chocolate
#define color_xyz_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9d;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xaa81;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffadb51fu;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffae6fb8862269ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 17.7118, 15.3746, 3.8504 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 17.7118, 15.3746, 3.8504 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 17.7118, 15.3746, 3.8504 } );
       }

    }
  }

#endif
