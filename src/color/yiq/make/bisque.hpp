#ifndef color_yiq_make_bisque
#define color_yiq_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.768627 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x66;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7a5c;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7b95e8u;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7beb9636e955ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.911471, 0.103391, -0.0166548 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.911471, 0.103391, -0.0166548 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.911471, 0.103391, -0.0166548 } );
       }

    }
  }

#endif
