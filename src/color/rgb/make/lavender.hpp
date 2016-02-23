#ifndef color_rgb_make_lavender
#define color_rgb_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 230.0/255.0, 230.0/255.0, 250.0/255.0 } ) - rgb(230,230,250) - #E6E6FA

     template< typename tag_name >
      inline
      void lavender( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xE6, 0xE6, 0xFA } ) );

        color_parameter = local;
       }

    }
  }

#endif
