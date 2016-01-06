#ifndef color_xyz_make_linen
#define color_xyz_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.941176, 0.901961 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xed;
       }

      inline
      void linen( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4c6;
       }

      inline
      void linen( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff14555cu;
       }

      inline
      void linen( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff194c5ae561e9ul;
       }

      inline
      void linen( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 30.415, 30.2602, 28.8122 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 30.415, 30.2602, 28.8122 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 30.415, 30.2602, 28.8122 } );
       }

    }
  }

#endif
