#ifndef color_rgb_make_aqua
#define color_rgb_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    {

      inline
      void aqua( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x38; // TODO
       } 

      inline
      void aqua( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x03E0; // TODO
       }

      inline
      void aqua( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00ffff;
       }

      inline
      void aqua( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff0000ffffffffu ); // TODO
       }

      inline
      void aqua( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 1, 1 } );
       }

      inline
      void aqua( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 1, 1 } );
       }

      inline
      void aqua( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 1, 1 } );
       }

    }
  }

#endif
