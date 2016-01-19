#ifndef color_trait_scalar
#define color_trait_scalar

// color::trait::scalar< category >

namespace color
 {
  namespace trait
   {

    template< typename category_name >
     struct scalar
      {
       public:
        typedef double instance_type;

        static bool is_small( instance_type const& value )
         {
          return ( -1e-6 < value ) && ( value < 1e-6 );
         }
      };

   }
 }

#endif