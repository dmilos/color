#ifndef color_yiq_make_black
#define color_yiq_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    {

      inline
      void black( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff;
       };

      inline
      void black( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffff;
       };

      inline
      void black( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffff;
       };

      inline
      void black( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffffffffffffu );
       };

      inline
      void black( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {1,1,1} );
       };

      inline
      void black( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {1,1,1} );
       };

      inline
      void black( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {1,1,1} );
       };

    }
  }

#endif
