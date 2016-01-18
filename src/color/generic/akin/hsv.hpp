#ifndef color_akin_hsv
#define color_akin_hsv

// ::color::akin::hsv< non_hsv_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct hsv
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
