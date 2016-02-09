#ifndef color_cmyk_make_sienna
#define color_cmyk_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(160,82,45) - #A0522D

     template< typename tag_name >
      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 0, 0.4875, 0.71875, 0.37254902 } ) );

        color_parameter = local;
       }

    }
  }

#endif
