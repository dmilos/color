#ifndef color_rgb_make_linen
#define color_rgb_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb6;
       }

      inline
      void linen( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdf7d;
       }

      inline
      void linen( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe6f0fau;
       }

      inline
      void linen( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe6e6f0f0fafaul;
       }

      inline
      void linen( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } );
       }

    }
  }

#endif
