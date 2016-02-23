#ifndef color_rgb_make_orchid
#define color_rgb_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 218.0/255.0, 112.0/255.0, 214.0/255.0 } ) - rgb(218,112,214) - #DA70D6

     template< typename tag_name >
      inline
      void orchid( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xDA, 0x70, 0xD6 } ) );

        color_parameter = local;
       }

    }
  }

#endif
