#ifndef color_yiq_make_olive
#define color_yiq_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0.5, 0 } ) 

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb7d92870;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdc8d;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd92870u;
       }

      inline
      void olive( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd82d291e7168ul;
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

