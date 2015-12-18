#ifndef color_yuv_make_green
#define color_yuv_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    {

      inline
      void green( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x38; //!< TODO
       } 

      inline
      void green( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x03E0;  //!< TODO
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00ff00;  //!< TODO
       };

      inline
      void green( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff0000ffff0000u );  //!< TODO
       }

      inline
      void green( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 1, 0 } );  //!< TODO
       };

      inline
      void green( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 1, 0 } );  //!< TODO
       };

      inline
      void green( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 1, 0 } );  //!< TODO
       };

    }
  }

#endif
