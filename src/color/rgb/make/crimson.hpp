#ifndef color_rgb_make_crimson
#define color_rgb_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } ) 

      inline
      void crimson( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6;
       }

      inline
      void crimson( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x385a;
       }

      inline
      void crimson( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3c14dcu;
       }

      inline
      void crimson( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3c3c1414dcdcul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } );
       }

    }
  }

#endif
