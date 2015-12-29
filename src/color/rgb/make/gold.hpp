#ifndef color_rgb_make_gold
#define color_rgb_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } ) 

      inline
      void gold( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2f;
       }

      inline
      void gold( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x35f;
       }

      inline
      void gold( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00d7ffu;
       }

      inline
      void gold( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0000d7d7fffful;
       }

      inline
      void gold( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } );
       }

    }
  }

#endif
