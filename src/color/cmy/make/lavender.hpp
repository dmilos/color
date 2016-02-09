#ifndef color_cmy_make_lavender
#define color_cmy_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #E6E6FA

     template< typename tag_name >
      inline
      void lavender( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.0980392157, 0.0980392157, 0.0196078431 } ) );

        color_parameter = local;
       }

    }
  }

#endif
