#ifndef color_yuv_make_olive
#define color_yuv_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.443, -0.218, 0.0500071 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x70, 0x3f, 0x89 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7168, 0x3fff, 0x8a67 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x716872af, 0x3fffffff, 0x8a6871f0 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x716872b020c4a000ull, 0x3ffffffffffffe00ull, 0x8a6871f0a9730800ull } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.443, -0.218, 0.0500071 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.443, -0.218, 0.0500071 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.443, -0.218, 0.0500071 } );
       }

    }
  }

#endif
