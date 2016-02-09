#ifndef color_cmyk_make_violet
#define color_cmyk_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #EE82EE

     template< typename tag_name >
      inline
      void violet( ::color::_internal::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 0, 0.453781513, 0, 0.0666666667 } ) );

        color_parameter = local;
       }

    }
  }

#endif
