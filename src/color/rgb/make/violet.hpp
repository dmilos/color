#ifndef color_rgb_make_violet
#define color_rgb_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    {

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x38; // TODO
       } 

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x03E0; // TODO
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffEE82EE;
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff0000ffff0000u ); // TODO
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 238/255.0, 130/255.0, 238/255.0 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 238/255.0, 130/255.0, 238/255.0 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 238/255.0, 130/255.0, 238/255.0 } );
       }

    }
  }

#endif
