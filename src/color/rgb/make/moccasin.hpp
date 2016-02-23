#ifndef color_rgb_make_moccasin
#define color_rgb_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 255.0/255.0, 228.0/255.0, 181.0/255.0 } ) - rgb(255,228,181) - #FFE4B5

     template< typename tag_name >
      inline
      void moccasin( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xFF, 0xE4, 0xB5 } ) );

        color_parameter = local;
       }

    }
  }

#endif
