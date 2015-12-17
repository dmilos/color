#ifndef color_gray_make_red
#define color_gray_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    {

      inline
      void red( ::color::_internal::model< color::category::gray_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x07;
       } 

      inline
      void red( ::color::_internal::model< color::category::gray_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x003F;
       }

      inline
      void red( ::color::_internal::model< color::category::gray_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0000ff;
       };

      inline
      void red( ::color::_internal::model< color::category::gray_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff00000000ffffu );
       }

      inline
      void red( ::color::_internal::model< color::category::gray_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,1>( { 0.2126 } );
       };

      inline
      void red( ::color::_internal::model< color::category::gray_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,1>( { 0.2126 } );
       };

      inline
      void red( ::color::_internal::model< color::category::gray_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,1>( { 0.2126 } );
       };

    }
  }

#endif
