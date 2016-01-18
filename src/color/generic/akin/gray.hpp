#ifndef color_akin_gray
#define color_akin_gray

// ::color::akin::gray< non_gray_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct gray
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
