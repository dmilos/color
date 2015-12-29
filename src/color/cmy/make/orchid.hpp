#ifndef color_cmy_make_orchid
#define color_cmy_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) 

      inline
      void orchid( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x19;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2a24;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff288f25u;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff29288f8f2525ul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.145098, 0.560784, 0.160784 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.145098, 0.560784, 0.160784 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.145098, 0.560784, 0.160784 } );
       }

    }
  }

#endif
