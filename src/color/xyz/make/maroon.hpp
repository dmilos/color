#ifndef color_xyz_make_maroon
#define color_xyz_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0 } ) - rgb(127,0,0) - #7F0000

     template< typename tag_name >
      inline
      void maroon( ::color::model< ::color::category::xyz< tag_name > > & color_parameter )
       {
        typedef ::color::category::xyz< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::xyz< double >      right_type;

        static left_type local( right_type( { 0.1495, 0.297858067, 0.105728201 } ) );

        color_parameter = local;
       }

    }
  }

#endif
