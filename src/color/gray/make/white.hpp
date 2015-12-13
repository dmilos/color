#ifndef color_gray_make_white
#define color_gray_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

      inline
      void white( ::color::_internal::model< color::category::gray_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff;
       };

      inline
      void white( ::color::_internal::model< color::category::gray_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffff;
       };

      inline
      void white( ::color::_internal::model< color::category::gray_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffff;
       };

      inline
      void white( ::color::_internal::model< color::category::gray_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffffffffffffu );
       };

      inline
      void white( ::color::_internal::model< color::category::gray_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,1>( { 1 } );
       };

      inline
      void white( ::color::_internal::model< color::category::gray_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,1>( { 1 });
       };

      inline
      void white( ::color::_internal::model< color::category::gray_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,1>( { 1 });
       };

    }
  }

#endif
