#ifndef color_akin_xyz
#define color_akin_xyz

// ::color::akin::xyz< non_xyz_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct xyz
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
