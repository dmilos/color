#ifndef color_hsv_make_gainsboro
#define color_hsv_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.86, 0.86, 0.86 } ) 

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x80;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd800;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdb0000u;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdc2800000000ul;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 0.86 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 0.86 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 0.86 } );
       }

    }
  }

#endif
