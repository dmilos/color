#ifndef color_xyz_make_gray50
#define color_xyz_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    {

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0;  //!< TODO
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7def;  //!< TODO
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7f7f;  //!< TODO
       };

      inline
      void gray50( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff7fff7fff7fffu );  //!< TODO
       }

      inline
      void gray50( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {0.5,0.5,0.5} );  //!< TODO
       };

      inline
      void gray50( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {0.5,0.5,0.5} );  //!< TODO
       };

      inline
      void gray50( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {0.5,0.5,0.5} );  //!< TODO
       };

    }
  }

#endif
