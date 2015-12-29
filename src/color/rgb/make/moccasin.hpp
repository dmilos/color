#ifndef color_rgb_make_moccasin
#define color_rgb_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } ) 

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb7;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb37f;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb5e4ffu;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb5b5e4e4fffful;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } );
       }

    }
  }

#endif
