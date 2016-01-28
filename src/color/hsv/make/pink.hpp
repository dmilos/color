#ifndef color_hsv_make_pink
#define color_hsv_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 29.5775, 69.2683, 80.3922 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x14, 0xb0, 0xcd } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1508, 0xb152, 0xcdcd } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x15086a1e, 0xb153aa29, 0xcdcdd509 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x15086a1e6e8ad200ull, 0xb153aa2aae025000ull, 0xcdcdd50a88f00000ull } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.5775, 69.2683, 80.3922 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.5775, 69.2683, 80.3922 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.5775, 69.2683, 80.3922 } );
       }

    }
  }

#endif
