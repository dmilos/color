#ifndef color_YDbDr_make_ivory
#define color_YDbDr_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.9375 } ) - rgb(255,255,239) - #FFFFEF

     template< typename tag_name >
      inline
      void ivory( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.992853125, 0.117497896496081, -0.0191653701079222 } ) );

        color_parameter = local;
       }

    }
  }

#endif
