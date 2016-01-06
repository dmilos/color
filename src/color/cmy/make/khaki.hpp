#ifndef color_cmy_make_khaki
#define color_cmy_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 0.901961, 0.54902 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x40;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7061;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff72180fu;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff737219180f0ful;
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0588235, 0.0980392, 0.45098 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0588235, 0.0980392, 0.45098 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0588235, 0.0980392, 0.45098 } );
       }

    }
  }

#endif
