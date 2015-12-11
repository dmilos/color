#ifndef color_yiq_make_white
#define color_yiq_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

      inline
      void white( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0;
       };

      inline
      void white( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0;
       };

      inline
      void white( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0;
       };

      inline
      void white( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0 );
       };

      inline
      void white( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {0,0,0} );
       };

      inline
      void white( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {0,0,0} );
       };

      inline
      void white( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {0,0,0} );
       };

    }
  }

#endif
