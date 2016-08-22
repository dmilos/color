#ifndef color_hcg_make_linen
#define color_hcg_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.9375, 0.9 } ) - rgb(250,239,229) - #FAEFE5

     template< typename tag_name >
      inline
      void linen( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 27.9878048780488, 67.2131147540983, 94.0196078431373 } ) );

        color_parameter = local;
       }

    }
  }

#endif
