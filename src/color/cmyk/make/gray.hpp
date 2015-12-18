#ifndef color_cmyk_make_gray50
#define color_cmyk_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    {

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7def;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7f7f;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0x00007fff7fff7fffu );
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( {0.5,0.5,0.5} );
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( {0.5,0.5,0.5} );
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( {0.5,0.5,0.5} );
       }

    }
  }

#endif
