#ifndef color_rgb_trait_768e5451_362e_4862_96d0_53155a0d69db
#define color_rgb_trait_768e5451_362e_4862_96d0_53155a0d69db


#include "./category.hpp"
#include "../generic/trait.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct trait< ::color::category::rgb_float >
      : public ::color::_internal::trait< ::color::category::generic_float< 3 > >
      {
      };

   }
 }

#endif
