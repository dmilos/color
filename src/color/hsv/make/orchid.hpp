#ifndef color_hsv_make_orchid
#define color_hsv_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) 

      inline
      void orchid( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9d;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd5fa;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffda7bd6u;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdada7c79d6f0ul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.839623, 0.486239, 0.854902 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.839623, 0.486239, 0.854902 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.839623, 0.486239, 0.854902 } );
       }

    }
  }

#endif
