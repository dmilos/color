#ifndef color_rgb_make_ivory
#define color_rgb_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 1, 240.0/255.0 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0xff, 0xf0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0xffff, 0xf0f0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0xffffffff, 0xf0f0f0f0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 1, 240.0/255.0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 1, 240.0/255.0 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 1, 240.0/255.0 } );
       }

    }
  }

#endif
