#ifndef color_cmy_make_wheat
#define color_cmy_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) - rgb(245,222,179) - #F5DEB3

     template< typename tag_name >
      inline
      void wheat( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.0392156863, 0.129411765, 0.298039216 } ) );

        color_parameter = local;
       }

    }
  }

#endif
