#ifndef color_yiq_make_olive
#define color_yiq_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x63;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x5a6d;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff59a170u;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff59e5a2837168ul;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.443, 0.160632, -0.155567 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.443, 0.160632, -0.155567 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.443, 0.160632, -0.155567 } );
       }

    }
  }

#endif
