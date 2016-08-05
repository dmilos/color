#ifndef color_akin_YCgCo
#define color_akin_YCgCo

// ::color::akin::YCgCo< non_YCgCo_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct YCgCo
      {
       typedef category_name category_type;
       typedef void              akin_type;
      };

   }
 }

#endif 