#ifndef color_yiq_make_orchid
#define color_yiq_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa4;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb252;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb3989bu;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb40299989bedul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.609106, 0.119126, 0.212353 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.609106, 0.119126, 0.212353 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.609106, 0.119126, 0.212353 } );
       }

    }
  }

#endif
