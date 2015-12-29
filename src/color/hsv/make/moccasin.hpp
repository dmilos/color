#ifndef color_hsv_make_moccasin
#define color_hsv_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.894118, 0.709804 } ) 

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xd0;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfd03;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff491au;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff4a491b19ul;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.105856, 0.290196, 1 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.105856, 0.290196, 1 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.105856, 0.290196, 1 } );
       }

    }
  }

#endif
