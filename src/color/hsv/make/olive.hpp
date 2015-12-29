#ifndef color_hsv_make_olive
#define color_hsv_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0.5, 0 } ) 

      inline
      void olive( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x79;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fe5;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff2au;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff2aaaul;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.166667, 1, 0.5 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.166667, 1, 0.5 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.166667, 1, 0.5 } );
       }

    }
  }

#endif
