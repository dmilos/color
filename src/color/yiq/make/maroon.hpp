#ifndef color_yiq_make_maroon
#define color_yiq_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0 } ) - rgb(127,0,0) - #7f0000

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x69;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x96e4;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff99bf26u;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff99e4bfff2645ul;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.1495, 0.297858, 0.105728 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.1495, 0.297858, 0.105728 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.1495, 0.297858, 0.105728 } );
       }

    }
  }

#endif
