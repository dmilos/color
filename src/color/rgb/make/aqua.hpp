#ifndef color_rgb_make_aqua
#define color_rgb_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00FFFF

     template< typename tag_name >
      inline
      void aqua( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {// Same as Cyan
        typedef ::color::category::rgb< tag_name    > category_left_type;
        typedef ::color::model< category_left_type  >          left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0x00, 0xFF, 0xFF } ) );

        color_parameter = local;
       }

    }
  }

#endif
