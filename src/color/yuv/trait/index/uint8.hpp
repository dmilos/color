#ifndef color_yuv_trait_index_uint8
#define color_yuv_trait_index_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct index< ::color::category::yuv_uint8< reference_number > >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
