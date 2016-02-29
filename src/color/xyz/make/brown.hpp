#ifndef color_xyz_make_brown
#define color_xyz_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::model< ::color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x8f;
       }

      inline
      void brown( ::color::model< ::color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xe966;
       }

      inline
      void brown( ::color::model< ::color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffed6841u;
       }

      inline
      void brown( ::color::model< ::color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffee4169bc4426ul;
       }

      inline
      void brown( ::color::model< ::color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 12.8059, 7.9847, 5.25908 } );
       }

      inline
      void brown( ::color::model< ::color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 12.8059, 7.9847, 5.25908 } );
       }

      inline
      void brown( ::color::model< ::color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 12.8059, 7.9847, 5.25908 } );
       }

    }
  }

#endif
