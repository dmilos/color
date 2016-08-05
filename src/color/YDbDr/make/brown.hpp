#ifndef color_YDbDr_make_brown
#define color_YDbDr_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #A52A2A

     template< typename tag_name >
      inline
      void brown( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.308851753, -0.578678824, -1.71417527 } ) );

        color_parameter = local;
       }

    }
  }

#endif
