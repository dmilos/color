#ifndef color_yiq_make_khaki
#define color_yiq_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 0.901961, 0.54902 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x66;
       }

      inline
      void khaki( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x667b;
       }

      inline
      void khaki( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff669cdeu;
       }

      inline
      void khaki( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff67229d61df99ul;
       }

      inline
      void khaki( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.873451, 0.136748, -0.10152 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.873451, 0.136748, -0.10152 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.873451, 0.136748, -0.10152 } );
       }

    }
  }

#endif
