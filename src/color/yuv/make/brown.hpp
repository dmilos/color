#ifndef color_yuv_make_brown
#define color_yuv_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.308929, -0.0709723, 0.296647 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4e, 0x6a, 0xbd } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4f15, 0x6b29, 0xbdbd } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4f15ff77, 0x6b2a0222, 0xbdbdbdbd } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4f15ff784d4b4000ull, 0x6b2a02227ef4d800ull, 0xbdbdbdbdbdbdc000ull } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.308929, -0.0709723, 0.296647 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.308929, -0.0709723, 0.296647 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.308929, -0.0709723, 0.296647 } );
       }

    }
  }

#endif
