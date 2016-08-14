#ifndef color_hsi_make_tan
#define color_hsi_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #D2B48C

     template< typename tag_name >
      inline
      void tan( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 34.7150039539482, 20.754716981132, 69.281045751634 } ) );

        color_parameter = local;
       }

    }
  }

#endif
