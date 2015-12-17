#ifndef color_gray_make_green
#define color_gray_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    {

      inline
      void green( ::color::_internal::model< color::category::gray_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x38;
       } 

      inline
      void green( ::color::_internal::model< color::category::gray_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x03E0;
       }

      inline
      void green( ::color::_internal::model< color::category::gray_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00ff00;
       };

      inline
      void green( ::color::_internal::model< color::category::gray_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff0000ffff0000u );
       }

      inline
      void green( ::color::_internal::model< color::category::gray_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,1>( { 0.7152 } );
       };

      inline
      void green( ::color::_internal::model< color::category::gray_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,1>( { 0.7152 } );
       };

      inline
      void green( ::color::_internal::model< color::category::gray_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,1>( { 0.7152 } );
       };

    }
  }

#endif
