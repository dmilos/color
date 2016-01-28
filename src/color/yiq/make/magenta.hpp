#ifndef color_yiq_make_magenta
#define color_yiq_make_magenta

// ::color::make::magenta( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.413, 0.274453, 0.522591 } ) - rgb(255,0,255) - #ff00ff

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x69, 0xba, 0xff } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x69b9, 0xbaf7, 0xffff } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x69ba5e34, 0xbaf89207, 0xffffffff } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x69ba5e353f7cec00ull, 0xbaf8920810c97800ull, 0x0000000000000000ull } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.413, 0.274453, 0.522591 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.413, 0.274453, 0.522591 } );
       }

      inline
      void magenta( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.413, 0.274453, 0.522591 } );
       }

    }
  }

#endif
