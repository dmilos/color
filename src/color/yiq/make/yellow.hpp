#ifndef color_yiq_make_yellow
#define color_yiq_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2e;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x32fb;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff33c4e1u;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff33cac506e2d0ul;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.886, 0.321263, -0.311135 } );
       }

      inline
      void yellow( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.886, 0.321263, -0.311135 } );
       }

      inline
      void yellow( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.886, 0.321263, -0.311135 } );
       }

    }
  }

#endif
