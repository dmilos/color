#ifndef color_rgb_make_beige
#define color_rgb_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 245.0/255.0, 245.0/255.0, 220.0/255.0 } ) 

      inline
      void beige( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb6;
       }

      inline
      void beige( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdbbd;
       }

      inline
      void beige( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdcf5f5u;
       }

      inline
      void beige( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdcdcf5f5f5f5ul;
       }

      inline
      void beige( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 245.0/255.0, 245.0/255.0, 220.0/255.0 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 245.0/255.0, 245.0/255.0, 220.0/255.0 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 245.0/255.0, 245.0/255.0, 220.0/255.0 } );
       }

    }
  }

#endif
