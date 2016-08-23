#ifndef color_hcg_make_brown
#define color_hcg_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,41,41) - #A52929

     template< typename tag_name >
      inline
      void brown( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 0, 48.2352941176471, 31.8181818181818 } ) );

        color_parameter = local;
       }

    }
  }

#endif
