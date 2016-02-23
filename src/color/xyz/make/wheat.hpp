#ifndef color_xyz_make_wheat
#define color_xyz_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xd2;
       }

      inline
      void wheat( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xeb5a;
       }

      inline
      void wheat( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff5faf5u;
       }

      inline
      void wheat( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff9dcffd8fa7ful;
       }

      inline
      void wheat( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 28.1323, 28.2504, 22.4675 } );
       }

      inline
      void wheat( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 28.1323, 28.2504, 22.4675 } );
       }

      inline
      void wheat( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 28.1323, 28.2504, 22.4675 } );
       }

    }
  }

#endif
