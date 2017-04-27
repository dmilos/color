#ifndef color_akin_lab
#define color_akin_lab

// ::color::akin::lab< non_lab_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct lab
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
