#ifndef color_yiq_make_linen
#define color_yiq_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.9375, 0.9 } ) - rgb(250,239,229) - #FAEFE5

     template< typename tag_name >
      inline
      void linen( ::color::_internal::model< ::color::category::yiq< tag_name > > & color_parameter )
       {
        typedef ::color::category::yiq< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yiq< double >      right_type;

        static left_type local( right_type( { 0.946049755, 0.0375989235, -0.00259772795 } ) );

        color_parameter = local;
       }

    }
  }

#endif
