#ifndef color_yuv_make_orange
#define color_yuv_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.65, 0 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x84;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb475;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb91dadu;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffba531daeae37ul;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.68055, -0.334898, 0.280259 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.68055, -0.334898, 0.280259 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.68055, -0.334898, 0.280259 } );
       }

    }
  }

#endif
