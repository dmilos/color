#ifndef color_rgb_make_pink
#define color_rgb_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 192/255, 203/255 } ) - rgb(255,192,203) - #FFC0CB

     template< typename tag_name >
      inline
      void pink( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xFF, 0xC0, 0xCB } ) );

        color_parameter = local;
       }

    }
  }

#endif
