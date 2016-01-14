#ifndef color_rgb_make_khaki
#define color_rgb_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 240.0/255.0, 230.0/255.0, 140.0/255.0 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x76;
       }

      inline
      void khaki( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8efb;
       }

      inline
      void khaki( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8ce6f0u;
       }

      inline
      void khaki( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8c8ce6e6f0f0ul;
       }

      inline
      void khaki( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240.0/255.0, 230.0/255.0, 140.0/255.0 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240.0/255.0, 230.0/255.0, 140.0/255.0 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240.0/255.0, 230.0/255.0, 140.0/255.0 } );
       }

    }
  }

#endif
