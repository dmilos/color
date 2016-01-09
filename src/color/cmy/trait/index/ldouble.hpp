#ifndef color_cmy_trait_index_ldouble
#define color_cmy_trait_index_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::cmy_ldouble >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif