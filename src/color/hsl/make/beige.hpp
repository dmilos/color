#ifndef color_hsl_make_beige
#define color_hsl_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #F5F5DC

     template< typename tag_name >
      inline
      void beige( ::color::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 60, 55.5555556, 91.1764706 } ) );

        color_parameter = local;
       }

    }
  }

#endif
