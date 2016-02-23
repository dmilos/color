#ifndef color_hsl_make_violet
#define color_hsl_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #EE82EE

     template< typename tag_name >
      inline
      void violet( ::color::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 300, 76.056338, 72.1568627 } ) );

        color_parameter = local;
       }

    }
  }

#endif
