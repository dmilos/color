#ifndef color_hcg_make_crimson
#define color_hcg_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,19,59) - #DC133B

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 348, 78.4313725490196, 36.3636363636364 } ) );

        color_parameter = local;
       }

    }
  }

#endif
