#ifndef color_rgb_make_cyan
#define color_rgb_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 1 } ) 

      inline
      void cyan( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {// Same as Aqua
        color_parameter.container() = ( 3 << 6) + ( 7 << 3 );
       }

      inline
      void cyan( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {// Same as Aqua
        color_parameter.container() = 0xffe0;
       }

      inline
      void cyan( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {// Same as Aqua
        color_parameter.container() = 0xffffff00u;
       }

      inline
      void cyan( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {// Same as Aqua
        color_parameter.container() = std::uint64_t( 0xffffFFFFFFFF0000u );
       }

      inline
      void cyan( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {// Same as Aqua
        color_parameter.container() = std::array<float,3>( { 0, 1, 1 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {// Same as Aqua
        color_parameter.container() = std::array<double,3>( { 0, 1, 1 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {// Same as Aqua
        color_parameter.container() = std::array<long double,3>( { 0, 1, 1 } );
       }

    }
  }

#endif
