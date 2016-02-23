#ifndef color_hsl_make_salmon
#define color_hsl_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.5, 0.447059 } ) - rgb(250,127,114) - #FA7F72

     template< typename tag_name >
      inline
      void salmon( ::color::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 5.95588235, 93.1506849, 71.372549 } ) );

        color_parameter = local;
       }

    }
  }

#endif
