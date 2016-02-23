#ifndef color_cmy_make_violet
#define color_cmy_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #EE82EE

     template< typename tag_name >
      inline
      void violet( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.0666666667, 0.490196078, 0.0666666667 } ) );

        color_parameter = local;
       }

    }
  }

#endif
