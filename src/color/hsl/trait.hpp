#ifndef color_hsl_trait_768e5451_362e_4862_96d0_53155a0d69db
#define color_hsl_trait_768e5451_362e_4862_96d0_53155a0d69db


#include "./category.hpp"
#include "../generic/trait.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct trait< ::color::category::hsl_uint8>
      : public ::color::_internal::trait< ::color::category::generic_uint8< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::hsl_uint16>
      : public ::color::_internal::trait< ::color::category::generic_uint16< 3 > >
      {
      };

   }
 }

#endif
