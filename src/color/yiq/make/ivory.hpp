#ifndef color_yiq_make_ivory
#define color_yiq_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.9375 } ) - rgb(255,255,239) - #FFFFEF

     template< typename tag_name >
      inline
      void ivory( ::color::_internal::model< ::color::category::yiq< tag_name > > & color_parameter )
       {
        typedef ::color::category::yiq< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yiq< double >      right_type;

        static left_type local( right_type( { 0.992875, 0.0200789561, -0.0194459152 } ) );

        color_parameter = local;
       }

    }
  }

#endif
