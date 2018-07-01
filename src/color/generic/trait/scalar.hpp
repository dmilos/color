#ifndef color_trait_scalar
#define color_trait_scalar

// ::color::trait::scalar< category >

#include "../../_internal/utility/type/traitc.hpp"


namespace color
 {
  namespace trait
   {

    template< typename category_name >
     struct scalar
      : public ::color::_internal::utility::type::traitC< long double >
      {
       public:
        typedef long double instance_type;

        static bool is_small( instance_type const& value )
         {
          return ( -1e-6 < value ) && ( value < 1e-6 );
         }
      };

   }
 }

#endif