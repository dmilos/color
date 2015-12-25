#ifndef color_yuv_make_orange
#define color_yuv_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.65, 0 } ) 

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x34;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x46d5;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff47abadu;
       }

      inline
      void orange( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff47beaa45ae37ul;
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

