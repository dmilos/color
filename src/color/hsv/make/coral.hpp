#ifndef color_hsv_make_coral
#define color_hsv_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xe0;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfea1;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffaf0bu;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffb0a30bbful;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 16.5217, 69, 100 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 16.5217, 69, 100 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 16.5217, 69, 100 } );
       }

    }
  }

#endif
