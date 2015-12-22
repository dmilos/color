#ifndef color_rgb_make_orange
#define color_rgb_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    {

      inline
      void orange( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x38; // TODO
       } 

      inline
      void orange( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x03E0; // TODO
       }

      inline
      void orange( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00A5FF;
       }

      inline
      void orange( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff0000ffff0000u ); // TODO
       }

      inline
      void orange( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 165.0/255.0, 0 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 165.0/255.0, 0 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 165.0/255.0, 0 } );
       }

    }
  }

#endif
