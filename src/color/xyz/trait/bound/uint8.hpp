#ifndef color_xyz_trait_bound_uint8
#define color_xyz_trait_bound_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {
       
    template< >
     struct bound< ::color::category::xyz_uint8 >
      : public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > 
      {
      };

   }
 }

#endif
