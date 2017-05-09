#ifndef color_akin_luv
#define color_akin_luv

// ::color::akin::luv< non_luv_category >::akin_cetegory_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct luv
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
