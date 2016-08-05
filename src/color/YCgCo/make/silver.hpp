#ifndef color_YCgCo_make_silver
#define color_YCgCo_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.75, 0.75, 0.75 } ) - rgb(191,191,191) - #BFBFBF

     template< typename tag_name >
      inline
      void silver( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.75, -0.5, -0.5 } ) );

        color_parameter = local;
       }

    }
  }

#endif
