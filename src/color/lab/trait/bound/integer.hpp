#ifndef color_lab_trait_bound_int
#define color_lab_trait_bound_int

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"

#include "./constrain.hpp"

namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum  reference_number>
     struct bound< ::color::category::lab_int8<reference_number>  >
      : public ::color::_internal::lab::bound::constrain< std::int16_t, typename ::color::trait::index< ::color::category::lab_int8<reference_number> >::instance_type, reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum  reference_number>
     struct bound< ::color::category::lab_int16<reference_number> >
      : public ::color::_internal::lab::bound::constrain< std::int16_t, typename ::color::trait::index< ::color::category::lab_int16<reference_number> >::instance_type,  reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum  reference_number>
     struct bound< ::color::category::lab_int32<reference_number> >
      : public ::color::_internal::lab::bound::constrain< std::int32_t, typename ::color::trait::index< ::color::category::lab_int32<reference_number> >::instance_type,  reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum  reference_number>
     struct bound< ::color::category::lab_int64<reference_number> >
      : public ::color::_internal::lab::bound::constrain< std::int64_t, typename ::color::trait::index< ::color::category::lab_int64<reference_number> >::instance_type,  reference_number >
      {
      };


   }
 }

#endif
