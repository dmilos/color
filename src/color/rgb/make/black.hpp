#ifndef color_rgb_make_black
#define color_rgb_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    {

      inline
      void black( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0; // TODO
       };

      inline
      void black( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0; // TODO
       };

      inline
      void black( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff000000u;
       };

      inline
      void black( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff000000000000u );
       };

      inline
      void black( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {0,0,0});
       };

      inline
      void black( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {0,0,0});
       };

      inline
      void black( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {0,0,0});
       };

    }
  }

#endif
