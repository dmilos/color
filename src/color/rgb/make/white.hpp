#ifndef color_rgb_make_white
#define color_rgb_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 1 } ) - rgb(255,255,255) - #FFFFFF

     template< typename tag_name >
      inline
      void white( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 1, 1, 1 } ) );

        color_parameter = local;
       }

    }
  }

#endif
