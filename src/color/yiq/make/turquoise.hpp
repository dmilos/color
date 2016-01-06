#ifndef color_yiq_make_turquoise
#define color_yiq_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4c;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x58d5;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff5a33aeu;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff5ab83404af04ul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.683671, -0.353625, -0.152201 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.683671, -0.353625, -0.152201 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.683671, -0.353625, -0.152201 } );
       }

    }
  }

#endif
