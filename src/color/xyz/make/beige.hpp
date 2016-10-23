#ifndef color_xyz_make_beige
#define color_xyz_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #F5F5DC

     template< typename tag_name >
      inline
      void beige( ::color::model< ::color::category::xyz< tag_name > > & color_parameter )
       {
        typedef ::color::category::xyz< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::xyz< double >      right_type;

        static left_type local( right_type( { 0.949607843, 0.0314964017, -0.0305033964 } ) );

        color_parameter = local;
       }

    }
  }

#endif
