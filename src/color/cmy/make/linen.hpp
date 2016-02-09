#ifndef color_cmy_make_linen
#define color_cmy_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.9375, 0.9 } ) - rgb(250,239,229) - #FAEFE5

     template< typename tag_name >
      inline
      void linen( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.0196078431, 0.0625, 0.1 } ) );

        color_parameter = local;
       }

    }
  }

#endif
