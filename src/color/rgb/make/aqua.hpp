#ifndef color_rgb_make_aqua
#define color_rgb_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00ffff

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0xff, 0xff } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0xffff, 0xffff } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0xffffffff, 0xffffffff } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0ull, 0x0ull, 0x0ull } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array<float,3>( { 0, 1, 1 } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array<double,3>( { 0, 1, 1 } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {// Same as Cyan
        color_parameter.container() = std::array<long double,3>( { 0, 1, 1 } );
       }

    }
  }

#endif
