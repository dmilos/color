#ifndef color_cmyk_make_azure
#define color_cmyk_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.941176, 1, 1 } ) 

      inline
      void azure( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xf;
       }

      inline
      void azure( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void azure( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00000fu;
       }

      inline
      void azure( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff000000000f0ful;
       }

      inline
      void azure( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.0588235, 0, 0, 0 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.0588235, 0, 0, 0 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.0588235, 0, 0, 0 } );
       }

    }
  }

#endif
