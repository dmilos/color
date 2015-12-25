#ifndef color_yiq_make_magenta
#define color_yiq_make_magenta

// ::color::make::magenta( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0, 1 } ) 

      inline
      void magenta( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb7854569;
       }

      inline
      void magenta( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x810c;
       }

      inline
      void magenta( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff854569u;
       }

      inline
      void magenta( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff85c8464269b9ul;
       }

      inline
      void magenta( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.413, 0.274453, 0.522591 } );
       }

      inline
      void magenta( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.413, 0.274453, 0.522591 } );
       }

      inline
      void magenta( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.413, 0.274453, 0.522591 } );
       }

    }
  }

#endif

