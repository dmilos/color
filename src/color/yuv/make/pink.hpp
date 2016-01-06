#ifndef color_yuv_make_pink
#define color_yuv_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x54;
       }

      inline
      void pink( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa531;
       }

      inline
      void pink( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa95092u;
       }

      inline
      void pink( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa9da50aa931eul;
       }

      inline
      void pink( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.574698, -0.161231, 0.201102 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.574698, -0.161231, 0.201102 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.574698, -0.161231, 0.201102 } );
       }

    }
  }

#endif
