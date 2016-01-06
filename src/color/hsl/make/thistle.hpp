#ifndef color_hsl_make_thistle
#define color_hsl_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x8d;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc8f9;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffcb3dd4u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffcc4b3e22d554ul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 24.2718, 79.8039 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 24.2718, 79.8039 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 24.2718, 79.8039 } );
       }

    }
  }

#endif
