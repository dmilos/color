#ifndef color_yiq_make_orange
#define color_yiq_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.65, 0 } ) 

      inline
      void orange( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x14;
       }

      inline
      void orange( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xe195;
       }

      inline
      void orange( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe06aadu;
       }

      inline
      void orange( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdf2d6ad5ae37ul;
       }

      inline
      void orange( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.68055, 0.417322, -0.128228 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.68055, 0.417322, -0.128228 } );
       }

      inline
      void orange( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.68055, 0.417322, -0.128228 } );
       }

    }
  }

#endif

