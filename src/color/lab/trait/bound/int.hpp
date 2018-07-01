#ifndef color_lab_trait_bound_int
#define color_lab_trait_bound_int

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"

#include "./scalar.hpp"

namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum     reference_number>
     struct bound< ::color::category::lab_int8<reference_number>  >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_int8<reference_number> >::instance_type, std::int16_t ,reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum     reference_number>
     struct bound< ::color::category::lab_int16<reference_number> >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_int16<reference_number> >::instance_type, std::int16_t , reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum     reference_number>
     struct bound< ::color::category::lab_int32<reference_number> >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_int32<reference_number> >::instance_type, std::int32_t , reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum     reference_number>
     struct bound< ::color::category::lab_int64<reference_number> >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_int64<reference_number> >::instance_type, std::int64_t , reference_number >
      {
      };


   }
 }

#endif
