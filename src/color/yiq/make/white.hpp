#ifndef color_yiq_make_white
#define color_yiq_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 1 } ) - rgb(255,255,255) - #ffffff

      inline
      void white( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5f;
       }

      inline
      void white( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7dff;
       }

      inline
      void white( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7fffu;
       }

      inline
      void white( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fff7ffffffful;
       }

      inline
      void white( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0, 0 } );
       }

      inline
      void white( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0, 0 } );
       }

      inline
      void white( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0, 0 } );
       }

    }
  }

#endif
