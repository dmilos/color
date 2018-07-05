#ifndef color_trait_info
#define color_trait_info

// ::color::trait::info< category >


namespace color
 {
  namespace trait
   {

    template< typename category_name >
     struct info
      {
       public:

        enum { implemented_entity  = false };
        enum {  meaningful_entity  = false };
        enum {    overburn_entity  = false };
        enum {        size_entity  =    -1 };

      };

   }
 }

#endif
