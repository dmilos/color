#ifndef color_yuv_make_red
#define color_yuv_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    {

      inline
      void red( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x07; //!< TODO
       } 

      inline
      void red( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x003F; //!< TODO
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0000ff; //!< TODO
       };

      inline
      void red( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff00000000ffffu ); //!< TODO
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0, 0 } ); //!< TODO
       };

      inline
      void red( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0, 0 } ); //!< TODO
       };

      inline
      void red( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0, 0 } ); //!< TODO
       };

    }
  }

#endif
