#ifndef color_cmy_make_coral
#define color_cmy_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #FF7F4F

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0, 0.5, 0.69 } ) );

        color_parameter = local;
       }

    }
  }

#endif
