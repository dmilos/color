#ifndef color_cmy_make_thistle
#define color_cmy_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) 

      inline
      void thistle( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x24e4;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff274027u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff272740402727ul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.152941, 0.25098, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.152941, 0.25098, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.152941, 0.25098, 0.152941 } );
       }

    }
  }

#endif
