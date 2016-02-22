#ifndef color_rgb_trait_container_split233
#define color_rgb_trait_container_split233


#include "../../../generic/type/split3.hpp"

#include "../../../_internal/utility/container/split3.hpp"

#include "../../../generic/trait/container.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

    template< unsigned first_index, unsigned second_index, unsigned third_index > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_index, second_index, third_index > > >
      : public ::color::_internal::utility::container::split233
      {
      };

   }
 }

#endif

