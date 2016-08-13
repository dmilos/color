#ifndef color_hsi_make_aqua
#define color_hsi_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00FFFF

     template< typename tag_name >
      inline
      void aqua( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 180, 100, 100 } ) );

        color_parameter = local;
       }

    }
  }

#endif
