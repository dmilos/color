#ifndef color_rgb_make_bisque
#define color_rgb_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } ) - rgb(255,228,196) - #FFE4C4

     template< typename tag_name >
      inline
      void bisque( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 1, 0.875, 0.75 } ) );

        color_parameter = local;
       }

    }
  }

#endif
