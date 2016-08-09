#ifndef color_yuv_trait_bound_ldouble
#define color_yuv_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_ldouble<reference_number> >
      : public ::color::_internal::utility::bound::yuv_scalar< unsigned, long double >
      {
      };

   }
 }

#endif