#ifndef color_yiq_make_gold
#define color_yiq_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2d;
       }

      inline
      void gold( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4718;
       }

      inline
      void gold( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff47cdcau;
       }

      inline
      void gold( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff47dece46cb3dul;
       }

      inline
      void gold( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.793922, 0.364315, -0.22916 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.793922, 0.364315, -0.22916 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.793922, 0.364315, -0.22916 } );
       }

    }
  }

#endif
