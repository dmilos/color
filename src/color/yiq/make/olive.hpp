#ifndef color_yiq_make_olive
#define color_yiq_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.443, 0.160632, -0.155567 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x70, 0xa1, 0x59 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7168, 0xa283, 0x59e5 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x716872af, 0xa283b6fb, 0x59e57855 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x716872b020c49800ull, 0xa283b6fbf79b4000ull, 0x59e5785659004000ull } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.443, 0.160632, -0.155567 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.443, 0.160632, -0.155567 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.443, 0.160632, -0.155567 } );
       }

    }
  }

#endif
