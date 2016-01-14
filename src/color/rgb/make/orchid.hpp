#ifndef color_rgb_make_orchid
#define color_rgb_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9d;
       }

      inline
      void orchid( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd375;
       }

      inline
      void orchid( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd670dau;
       }

      inline
      void orchid( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd6d67070dadaul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } );
       }

    }
  }

#endif
