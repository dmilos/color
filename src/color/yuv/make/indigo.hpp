#ifndef color_yuv_make_indigo
#define color_yuv_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.146059, 0.178999, 0.129895 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x25, 0xb3, 0x9a } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2563, 0xb48c, 0x9b08 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x25641c6e, 0xb48cd229, 0x9b08f53c } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x25641c6e59defe00ull, 0xb48cd22a94e94800ull, 0x9b08f53cd0b7e000ull } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.146059, 0.178999, 0.129895 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.146059, 0.178999, 0.129895 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.146059, 0.178999, 0.129895 } );
       }

    }
  }

#endif
