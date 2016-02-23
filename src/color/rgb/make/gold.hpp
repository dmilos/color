#ifndef color_rgb_make_gold
#define color_rgb_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 215.0/255.0, 0.0/255.0 } ) - rgb(255,215,0) - #FFD700

     template< typename tag_name >
      inline
      void gold( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xFF, 0xD7, 0x00 } ) );

        color_parameter = local;
       }

    }
  }

#endif
