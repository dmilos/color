#ifndef color_yiq_make_silver
#define color_yiq_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.75, 0.75, 0.75 } ) - rgb(191,191,191) - #bfbfbf

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5d;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7df7;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7fbfu;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fff7fffbffful;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.75, 0, 0 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.75, 0, 0 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.75, 0, 0 } );
       }

    }
  }

#endif
