#ifndef color_yiq_make_crimson
#define color_yiq_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xaa;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xb34a;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb3d854u;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb492d98f54b0ul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.330824, 0.416834, 0.214654 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.330824, 0.416834, 0.214654 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.330824, 0.416834, 0.214654 } );
       }

    }
  }

#endif
