#ifndef color_yuv_trait_bound_float
#define color_yuv_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"

namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_float<reference_number> >
      : public ::color::_internal::yuv::bound::scalar< typename ::color::trait::index< ::color::category::yuv_float<reference_number> >::instance_type, float >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_double< reference_number > >
      : public ::color::_internal::yuv::bound::scalar< typename ::color::trait::index< ::color::category::yuv_double<reference_number> >::instance_type, double >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_ldouble<reference_number> >
      : public ::color::_internal::yuv::bound::scalar< typename ::color::trait::index< ::color::category::yuv_ldouble<reference_number> >::instance_type, long double >
      {
      };

   }
 }

#endif
