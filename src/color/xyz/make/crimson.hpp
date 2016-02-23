#ifndef color_xyz_make_crimson
#define color_xyz_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc3;
       }

      inline
      void crimson( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4cd6;
       }

      inline
      void crimson( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff503bc7u;
       }

      inline
      void crimson( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff52183ca5cac4ul;
       }

      inline
      void crimson( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 15.7772, 6.98947, 7.46289 } );
       }

      inline
      void crimson( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 15.7772, 6.98947, 7.46289 } );
       }

      inline
      void crimson( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 15.7772, 6.98947, 7.46289 } );
       }

    }
  }

#endif
