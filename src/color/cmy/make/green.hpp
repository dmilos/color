#ifndef color_cmy_make_green
#define color_cmy_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    {

      inline
      void green( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0;  // TODO
       } 

      inline
      void green( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7def; // TODO
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff007f00;
       };

      inline
      void green( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff00007fff0000u );
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0, 1 } );
       };

      inline
      void green( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0, 1 } );
       };

      inline
      void green( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0, 1 } );
       };

    }
  }

#endif
