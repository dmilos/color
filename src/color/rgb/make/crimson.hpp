#ifndef color_rgb_make_crimson
#define color_rgb_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } ) - rgb(220,20,60) - #DC143C

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xDC, 0x14, 0x3C } ) );

        color_parameter = local;
       }

    }
  }

#endif
