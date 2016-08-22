#ifndef color_hcg_make_blue
#define color_hcg_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 1 } ) - rgb(0,0,255) - #0000FF

     template< typename tag_name >
      inline
      void blue( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 0.11435, -1.8799663439373, 0.306645921726755 } ) );

        color_parameter = local;
       }

    }
  }

#endif
