#ifndef color_akin_cmy
#define color_akin_cmy

// ::color::akin::cmy< non_cmy_category >::akin_cetegory_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct cmy
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
