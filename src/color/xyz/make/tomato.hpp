#ifndef color_xyz_make_tomato
#define color_xyz_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1a;
       }

      inline
      void tomato( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8ed4;
       }

      inline
      void tomato( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff92c9bfu;
       }

      inline
      void tomato( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff945acc85c375ul;
       }

      inline
      void tomato( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 21.2667, 15.816, 8.92541 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 21.2667, 15.816, 8.92541 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 21.2667, 15.816, 8.92541 } );
       }

    }
  }

#endif
