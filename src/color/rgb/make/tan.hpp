#ifndef color_rgb_make_tan
#define color_rgb_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x65;
       }

      inline
      void tan( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8d73;
       }

      inline
      void tan( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8cb4d2u;
       }

      inline
      void tan( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8c8cb4b4d2d2ul;
       }

      inline
      void tan( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } );
       }

    }
  }

#endif
