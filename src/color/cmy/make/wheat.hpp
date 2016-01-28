#ifndef color_cmy_make_wheat
#define color_cmy_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0392157, 0.129412, 0.298039 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x09, 0x20, 0x4c } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0a09, 0x2120, 0x4c4c } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0a0a0a09, 0x21212120, 0x4c4c4c4c } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0a0a0a0a0a0a0800ull, 0x2121212121212000ull, 0x4c4c4c4c4c4c5000ull } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0392157, 0.129412, 0.298039 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0392157, 0.129412, 0.298039 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0392157, 0.129412, 0.298039 } );
       }

    }
  }

#endif
