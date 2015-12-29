#ifndef color_rgb_make_snow
#define color_rgb_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 250.0/255.0, 250.0/255.0 } ) 

      inline
      void snow( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb7;
       }

      inline
      void snow( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf7df;
       }

      inline
      void snow( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfffafaffu;
       }

      inline
      void snow( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffffafafafafffful;
       }

      inline
      void snow( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 250.0/255.0, 250.0/255.0 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 250.0/255.0, 250.0/255.0 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 250.0/255.0, 250.0/255.0 } );
       }

    }
  }

#endif
