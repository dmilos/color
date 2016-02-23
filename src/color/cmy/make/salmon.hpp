#ifndef color_cmy_make_salmon
#define color_cmy_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.5, 0.447059 } ) - rgb(250,127,114) - #FA7F72

     template< typename tag_name >
      inline
      void salmon( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.0196078431, 0.5, 0.552941176 } ) );

        color_parameter = local;
       }

    }
  }

#endif
