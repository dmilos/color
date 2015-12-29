#ifndef color_rgb_make_peru
#define color_rgb_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } ) 

      inline
      void peru( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1d;
       }

      inline
      void peru( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3e18;
       }

      inline
      void peru( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3f85cdu;
       }

      inline
      void peru( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3f3f8585cdcdul;
       }

      inline
      void peru( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } );
       }

    }
  }

#endif
