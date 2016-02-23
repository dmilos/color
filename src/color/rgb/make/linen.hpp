#ifndef color_rgb_make_linen
#define color_rgb_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } ) - rgb(250,240,230) - #FAF0E6

     template< typename tag_name >
      inline
      void linen( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 250.0/255.0, 0.9375, 0.9 } ) );

        color_parameter = local;
       }

    }
  }

#endif
