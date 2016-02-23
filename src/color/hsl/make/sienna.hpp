#ifndef color_hsl_make_sienna
#define color_hsl_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(160,82,45) - #A0522D

     template< typename tag_name >
      inline
      void sienna( ::color::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 19.3043478, 56.097561, 40.1960784 } ) );

        color_parameter = local;
       }

    }
  }

#endif
