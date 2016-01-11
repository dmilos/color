#ifndef color_gray_trait_bound_uint8
#define color_gray_trait_bound_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/bound/332.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {
       
    template< >
     struct bound< ::color::category::gray_uint8 >
      : public ::color::_internal::utility::bound::bound332< unsigned >
      {
      };

   }
 }

#endif
