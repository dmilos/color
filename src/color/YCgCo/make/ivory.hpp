#ifndef color_YCgCo_make_ivory
#define color_YCgCo_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.9375 } ) - rgb(255,255,239) - #FFFFEF

     template< typename tag_name >
      inline
      void ivory( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.984375, 0.015625, 0.03125 } ) );

        color_parameter = local;
       }

    }
  }

#endif
