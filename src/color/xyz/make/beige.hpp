#ifndef color_xyz_make_beige
#define color_xyz_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xad;
       }

      inline
      void beige( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcd04;
       }

      inline
      void beige( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdc664cu;
       }

      inline
      void beige( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe16c6c505175ul;
       }

      inline
      void beige( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 30.0519, 30.6447, 27.5789 } );
       }

      inline
      void beige( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 30.0519, 30.6447, 27.5789 } );
       }

      inline
      void beige( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 30.0519, 30.6447, 27.5789 } );
       }

    }
  }

#endif
