#ifndef color_yuv_make_violet
#define color_yuv_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) 

      inline
      void violet( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4;
       }

      inline
      void violet( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3475;
       }

      inline
      void violet( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff371faeu;
       }

      inline
      void violet( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff37d51f51af49ul;
       }

      inline
      void violet( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.684722, 0.122342, 0.218112 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.684722, 0.122342, 0.218112 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.684722, 0.122342, 0.218112 } );
       }

    }
  }

#endif

