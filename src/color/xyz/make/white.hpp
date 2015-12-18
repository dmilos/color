#ifndef color_xyz_make_white
#define color_xyz_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

      inline
      void white( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff; //!< TODO
       }

      inline
      void white( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffff; //!< TODO
       }

      inline
      void white( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff; //!< TODO
       }

      inline
      void white( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffffffffffffffffu ); //!< TODO
       }

      inline
      void white( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {1,1,1} ); //!< TODO
       }

      inline
      void white( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {1,1,1} ); //!< TODO
       }

      inline
      void white( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {1,1,1} ); //!< TODO
       }

    }
  }

#endif
