#ifndef color_yiq_trait_bound_uint16
#define color_yiq_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/556.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::yiq_uint16 >
      : public ::color::_internal::utility::bound::bound556< unsigned >
      {
      };

   }
 }

#endif