#ifndef color_yiq_make_red
#define color_yiq_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #ff0000

      inline
      void red( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xba;
       }

      inline
      void red( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb3e9;
       }

      inline
      void red( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb3ff4cu;
       }

      inline
      void red( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb3caffff4c8aul;
       }

      inline
      void red( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.299, 0.595716, 0.211456 } );
       }

      inline
      void red( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.299, 0.595716, 0.211456 } );
       }

      inline
      void red( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.299, 0.595716, 0.211456 } );
       }

    }
  }

#endif
