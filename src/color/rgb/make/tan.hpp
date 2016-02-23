#ifndef color_rgb_make_tan
#define color_rgb_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 210.0/255.0, 180.0/255.0, 140.0/255.0 } ) - rgb(210,180,140) - #D2B48C

     template< typename tag_name >
      inline
      void tan( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xD2, 0xB4, 0x8C } ) );

        color_parameter = local;
       }

    }
  }

#endif
