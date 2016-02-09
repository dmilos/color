#ifndef color_cmy_make_plum
#define color_cmy_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #DDA0DD

     template< typename tag_name >
      inline
      void plum( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.133333333, 0.37254902, 0.133333333 } ) );

        color_parameter = local;
       }

    }
  }

#endif
