#ifndef color_xyz_make_khaki
#define color_xyz_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 0.901961, 0.54902 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x59;
       }

      inline
      void khaki( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x13d4;
       }

      inline
      void khaki( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff1c18c9u;
       }

      inline
      void khaki( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff1f4a1d58ce6bul;
       }

      inline
      void khaki( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 27.1594, 28.9015, 17.643 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 27.1594, 28.9015, 17.643 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 27.1594, 28.9015, 17.643 } );
       }

    }
  }

#endif
