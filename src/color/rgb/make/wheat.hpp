#ifndef color_rgb_make_wheat
#define color_rgb_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 245.0/255.0, 222.0/255.0, 179.0/255.0 } ) - rgb(245,222,179) - #f5deb3

     template< typename tag_name >
      inline
      void wheat( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xF5, 0xDE, 0xB3 } ) );

        color_parameter = local;
       }

    }
  }

#endif
