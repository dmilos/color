#ifndef color_YDbDr_make_lime
#define color_YDbDr_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 0 } ) - rgb(0,255,0) - #00FF00

     template< typename tag_name >
      inline
      void lime( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.586811, -2.354078, 2.975256 } ) );

        color_parameter = local;
       }

    }
  }

#endif
