#ifndef color_xyz_make_orange
#define color_xyz_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.65, 0 } ) - rgb(255,165,0) - #FFA500

     template< typename tag_name >
      inline
      void orange( ::color::model< ::color::category::xyz< tag_name > > & color_parameter )
       {
        typedef ::color::category::xyz< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::xyz< double >      right_type;

        static left_type local( right_type( { 0.68055, 0.41732179, -0.128227777 } ) );

        color_parameter = local;
       }

    }
  }

#endif
