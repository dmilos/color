#ifndef color_yuv_make_teal
#define color_yuv_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.3505, 0.0735688, -0.3075 } ) - rgb(0,127,127) - #007f7f

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x59, 0x95, 0x3f } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x59ba, 0x9598, 0x3fff } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x59ba5e34, 0x9599233f, 0x3fffffff } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x59ba5e353f7cf000ull, 0x9599234024fbf000ull, 0x3ffffffffffffe00ull } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.3505, 0.0735688, -0.3075 } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.3505, 0.0735688, -0.3075 } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.3505, 0.0735688, -0.3075 } );
       }

    }
  }

#endif
