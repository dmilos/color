#ifndef color_cmy_make_lime
#define color_cmy_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 0 } ) 

      inline
      void lime( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc7;
       }

      inline
      void lime( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfc1f;
       }

      inline
      void lime( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff00ffu;
       }

      inline
      void lime( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff0000fffful;
       }

      inline
      void lime( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0, 1 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0, 1 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0, 1 } );
       }

    }
  }

#endif

