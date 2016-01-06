#ifndef color_yiq_make_beige
#define color_yiq_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void beige( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x761d;
       }

      inline
      void beige( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7886f2u;
       }

      inline
      void beige( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff788686c3f318ul;
       }

      inline
      void beige( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.949608, 0.0314964, -0.0305034 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.949608, 0.0314964, -0.0305034 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.949608, 0.0314964, -0.0305034 } );
       }

    }
  }

#endif
