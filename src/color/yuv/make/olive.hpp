#ifndef color_yuv_make_olive
#define color_yuv_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0.5, 0 } ) 

      inline
      void olive( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3b;
       }

      inline
      void olive( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf4d;
       }

      inline
      void olive( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0cc970u;
       }

      inline
      void olive( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0ccdc8327168ul;
       }

      inline
      void olive( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.443, -0.218, 0.0500071 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.443, -0.218, 0.0500071 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.443, -0.218, 0.0500071 } );
       }

    }
  }

#endif

