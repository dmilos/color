#ifndef color_rgb_make_salmon
#define color_rgb_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) 

      inline
      void salmon( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa6;
       }

      inline
      void salmon( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xda7a;
       }

      inline
      void salmon( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdda0ddu;
       }

      inline
      void salmon( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdddda0a0ddddul;
       }

      inline
      void salmon( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.866667, 0.627451, 0.866667 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.866667, 0.627451, 0.866667 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.866667, 0.627451, 0.866667 } );
       }

    }
  }

#endif
