#ifndef color_xyz_make_ivory
#define color_xyz_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.941176 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff;
       }

      inline
      void ivory( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3ded;
       }

      inline
      void ivory( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff4da08fu;
       }

      inline
      void ivory( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff524fa5a59588ul;
       }

      inline
      void ivory( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 31.5545, 31.9102, 30.0707 } );
       }

      inline
      void ivory( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 31.5545, 31.9102, 30.0707 } );
       }

      inline
      void ivory( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 31.5545, 31.9102, 30.0707 } );
       }

    }
  }

#endif
