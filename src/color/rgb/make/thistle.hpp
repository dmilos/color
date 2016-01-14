#ifndef color_rgb_make_thistle
#define color_rgb_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xad;
       }

      inline
      void thistle( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd5f5;
       }

      inline
      void thistle( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd8bfd8u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd8d8bfbfd8d8ul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } );
       }

    }
  }

#endif
