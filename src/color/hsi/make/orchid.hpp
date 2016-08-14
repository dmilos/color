#ifndef color_hsi_make_orchid
#define color_hsi_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #DA70D6

     template< typename tag_name >
      inline
      void orchid( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 301.907740859608, 38.2352941176471, 71.1111111111111 } ) );

        color_parameter = local;
       }

    }
  }

#endif
