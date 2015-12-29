#ifndef color_rgb_make_aquamarine
#define color_rgb_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 1, 212.0/255.0 } ) 

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xbb;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd3ef;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd4ff7fu;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd4d4ffff7ffful;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 1, 212.0/255.0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 1, 212.0/255.0 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 1, 212.0/255.0 } );
       }

    }
  }

#endif
