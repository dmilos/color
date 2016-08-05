#ifndef color_akin_YDbDr
#define color_akin_YDbDr

// ::color::akin::YDbDr< non_YDbDr_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct YDbDr
      {
       typedef category_name category_type;
       typedef void              akin_type;
      };

   }
 }

#endif 