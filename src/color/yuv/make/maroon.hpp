#ifndef color_yuv_make_maroon
#define color_yuv_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0, 0 } ) 

      inline
      void maroon( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4fc4;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff4eee26u;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff4eb8ed2b2645ul;
       }

      inline
      void maroon( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.1495, -0.0735689, 0.3075 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.1495, -0.0735688, 0.3075 } );
       }

      inline
      void maroon( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.1495, -0.0735688, 0.3075 } );
       }

    }
  }

#endif

