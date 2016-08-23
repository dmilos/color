#ifndef color_hcg_make_indigo
#define color_hcg_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,129) - #4B0081

     template< typename tag_name >
      inline
      void indigo( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 274.615384615385, 50.9803921568627, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif
