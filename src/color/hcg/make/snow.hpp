#ifndef color_hcg_make_snow
#define color_hcg_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.980392, 0.980392 } ) - rgb(255,250,250) - #FFFAFA

     template< typename tag_name >
      inline
      void snow( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 0, 100.000000000001, 99.0196078431373 } ) );

        color_parameter = local;
       }

    }
  }

#endif
