#ifndef color_cmy_make_plum
#define color_cmy_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) 

      inline
      void plum( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x10;
       }

      inline
      void plum( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2164;
       }

      inline
      void plum( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff215f21u;
       }

      inline
      void plum( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff22215f5f2221ul;
       }

      inline
      void plum( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.133333, 0.372549, 0.133333 } );
       }

      inline
      void plum( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.133333, 0.372549, 0.133333 } );
       }

      inline
      void plum( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.133333, 0.372549, 0.133333 } );
       }

    }
  }

#endif
