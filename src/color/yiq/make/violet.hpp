#ifndef color_yiq_make_violet
#define color_yiq_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) 

      inline
      void violet( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4;
       }

      inline
      void violet( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3475;
       }

      inline
      void violet( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff381daeu;
       }

      inline
      void violet( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff38a91dc1af49ul;
       }

      inline
      void violet( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.684722, 0.116239, 0.221333 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.684722, 0.116239, 0.221333 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.684722, 0.116239, 0.221333 } );
       }

    }
  }

#endif

