#ifndef color_YCgCo_make_pink
#define color_YCgCo_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.752941, 0.796078 } ) - rgb(255,192,203) - #FFC0CB

     template< typename tag_name >
      inline
      void pink( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.825490196, -0.0725490196, 0.101960784 } ) );

        color_parameter = local;
       }

    }
  }

#endif
