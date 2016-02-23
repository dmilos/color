#ifndef color_rgb_make_violet
#define color_rgb_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 238/255, 130/255, 238/255 } ) - rgb(238,130,238) - #EE82EE

     template< typename tag_name >
      inline
      void violet( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xEE, 0x82, 0xEE } ) );

        color_parameter = local;
       }

    }
  }

#endif
