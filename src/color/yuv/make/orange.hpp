#ifndef color_yuv_make_orange
#define color_yuv_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.68055, -0.334898, 0.280259 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xad, 0x1d, 0xb9 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xae37, 0x1dae, 0xba53 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xae388658, 0x1dae6752, 0xba54941e } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xae3886594af4f800ull, 0x1dae6753194f9e00ull, 0xba54941f42af2000ull } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.68055, -0.334898, 0.280259 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.68055, -0.334898, 0.280259 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.68055, -0.334898, 0.280259 } );
       }

    }
  }

#endif
