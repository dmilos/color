#ifndef color_yiq_make_coral
#define color_yiq_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6c;
       }

      inline
      void coral( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8b13;
       }

      inline
      void coral( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8acca0u;
       }

      inline
      void coral( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8b6acd1ca0b9ul;
       }

      inline
      void coral( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.62784, 0.358898, 0.0466126 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.62784, 0.358898, 0.0466126 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.62784, 0.358898, 0.0466126 } );
       }

    }
  }

#endif
