#ifndef color_akin_yiq
#define color_akin_yiq

// ::color::akin::yiq< non_yiq_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct yiq
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
