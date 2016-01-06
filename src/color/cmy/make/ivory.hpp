#ifndef color_cmy_make_ivory
#define color_cmy_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.941176 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void ivory( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc00;
       }

      inline
      void ivory( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0f0000u;
       }

      inline
      void ivory( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0f0f00000000ul;
       }

      inline
      void ivory( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 0.0588235 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 0.0588235 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 0.0588235 } );
       }

    }
  }

#endif
