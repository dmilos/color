#ifndef color_yiq_make_maroon
#define color_yiq_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0, 0 } ) 

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x11;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x1924;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff1a4b26u;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff1b104c402645ul;
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

