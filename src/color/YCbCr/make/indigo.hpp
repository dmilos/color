#ifndef color_YCbCr_make_indigo
#define color_YCbCr_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4B0082

     template< typename tag_name >
      inline
      void indigo( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.146189902, 0.205273431, 0.105605647 } ) );

        color_parameter = local;
       }

    }
  }

#endif
