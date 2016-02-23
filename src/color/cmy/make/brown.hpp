#ifndef color_cmy_make_brown
#define color_cmy_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #A52A2A

     template< typename tag_name >
      inline
      void brown( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.352941176, 0.835294118, 0.835294118 } ) );

        color_parameter = local;
       }

    }
  }

#endif
