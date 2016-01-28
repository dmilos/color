#ifndef color_xyz_make_red
#define color_xyz_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #ff0000

      inline
      void red( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3b;
       }

      inline
      void red( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3f5;
       }

      inline
      void red( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00ffc2u;
       }

      inline
      void red( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0000ffffc4cful;
       }

      inline
      void red( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 15.6458, 5.65068, 0 } );
       }

      inline
      void red( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 15.6458, 5.65068, 0 } );
       }

      inline
      void red( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 15.6458, 5.65068, 0 } );
       }

    }
  }

#endif
