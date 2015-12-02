#ifndef color_rgb_rgb_289d3a0b_06c8_48de_95d2_0b38ad3d4298
#define color_rgb_rgb_289d3a0b_06c8_48de_95d2_0b38ad3d4298

#include "../_internal/model.hpp"

#include "./category.hpp"

#include "./double.hpp"
#include "./float.hpp"
#include "./ldouble.hpp"
#include "./uint32.hpp"
#include "./uint64.hpp"

namespace color
 {
  typedef ::color::_internal::model< ::color::category::rgb_uint8   >  rgb_uint8;  //!< classic 332
  typedef ::color::_internal::model< ::color::category::rgb_uint16  >  rgb_uint16; //!< classic 655
  typedef ::color::_internal::model< ::color::category::rgb_uint32  >  rgb_uint32; //!< classic 888
  typedef ::color::_internal::model< ::color::category::rgb_uint64  >  rgb_uint64; //!< classic 16-16-16
  typedef ::color::_internal::model< ::color::category::rgb_float   >  rgb_float;
  typedef ::color::_internal::model< ::color::category::rgb_double  >  rgb_double;
  typedef ::color::_internal::model< ::color::category::rgb_ldouble >  rgb_ldouble;
 }

#endif
