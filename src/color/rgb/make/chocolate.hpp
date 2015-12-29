#ifndef color_rgb_make_chocolate
#define color_rgb_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } ) 

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x15;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x1d99;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff1e69d2u;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff1e1e6969d2d2ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } );
       }

    }
  }

#endif
