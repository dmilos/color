#ifndef color_hsi_make_fuchsia
#define color_hsi_make_fuchsia

// ::color::make::fuchsia( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #FF00FF

     template< typename tag_name >
      inline
      void fuchsia( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 300, 100, 66.6666666666667 } ) );

        color_parameter = local;
       }

    }
  }

#endif
