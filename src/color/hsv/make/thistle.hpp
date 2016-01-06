#ifndef color_hsv_make_thistle
#define color_hsv_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x85;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd479;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd81dd4u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd8d81da1d554ul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 11.5741, 84.7059 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 11.5741, 84.7059 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 11.5741, 84.7059 } );
       }

    }
  }

#endif
