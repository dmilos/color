#ifndef color_yuv_trait_container_uint32
#define color_yuv_trait_container_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct container< ::color::category::yuv_uint32< reference_number> >
      : public ::color::_internal::utility::container::array< std::uint32_t, 3 >
      {
      };

   }
 }

#endif
