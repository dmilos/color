#ifndef color_yuv_make_teal
#define color_yuv_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0.5, 0.5 } ) 

      inline
      void teal( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2;
       }

      inline
      void teal( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb44a;
       }

      inline
      void teal( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb21259u;
       }

      inline
      void teal( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb14812d559baul;
       }

      inline
      void teal( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.3505, 0.0735689, -0.3075 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.3505, 0.0735688, -0.3075 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.3505, 0.0735688, -0.3075 } );
       }

    }
  }

#endif

