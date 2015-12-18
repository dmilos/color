#ifndef color_yiq_make_gray50
#define color_yiq_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    {

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0; // TODO
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7def; // TODO
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f0000;
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0x00007fff00000000u );
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {0.5,0,0} );
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {0.5,0,0} );
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {0.5,0,0} );
       }

    }
  }

#endif
