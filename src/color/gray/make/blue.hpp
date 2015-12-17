#ifndef color_gray_make_blue
#define color_gray_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    {

      inline
      void blue( ::color::_internal::model< color::category::gray_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xC0;
       } 

      inline
      void blue( ::color::_internal::model< color::category::gray_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7C00;
       }

      inline
      void blue( ::color::_internal::model< color::category::gray_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff0000;
       };

      inline
      void blue( ::color::_internal::model< color::category::gray_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffffffff00000000u );
       }

      inline
      void blue( ::color::_internal::model< color::category::gray_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,1>( { 0.0722 } );
       };

      inline
      void blue( ::color::_internal::model< color::category::gray_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,1>( { 0.0722 } );
       };

      inline
      void blue( ::color::_internal::model< color::category::gray_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,1>( { 0.0722 } );
       };

    }
  }

#endif
