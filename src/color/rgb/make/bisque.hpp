#ifndef color_rgb_make_bisque
#define color_rgb_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } ) 

      inline
      void bisque( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb7;
       }

      inline
      void bisque( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc37f;
       }

      inline
      void bisque( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc4e4ffu;
       }

      inline
      void bisque( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffc4c4e4e4fffful;
       }

      inline
      void bisque( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } );
       }

    }
  }

#endif
