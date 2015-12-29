#ifndef color_cmyk_make_orange
#define color_cmyk_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.65, 0 } ) 

      inline
      void orange( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff5900;
       }

      inline
      void orange( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf50;
       }

      inline
      void orange( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff5900u;
       }

      inline
      void orange( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff59990000ul;
       }

      inline
      void orange( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.35, 1, 0 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.35, 1, 0 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.35, 1, 0 } );
       }

    }
  }

#endif
