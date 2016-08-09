#ifndef color_yuv_trait_bound_double
#define color_yuv_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/yuv.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_double< reference_number > >
      : public ::color::_internal::utility::bound::yuv_scalar< unsigned, double >
      {
      };

   }
 }

#endif