#ifndef color_cmyk_make_black
#define color_cmyk_make_black

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

      inline
      void black( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0;
       }

      inline
      void black( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0;
       }

      inline
      void black( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0;
       }

      inline
      void black( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0 );
       }

      inline
      void black( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( {0,0,0} );
       }

      inline
      void black( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( {0,0,0} );
       }

      inline
      void black( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( {0,0,0} );
       }

    }
  }

#endif
