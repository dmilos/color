#ifndef color_rgb_gray
#define color_rgb_gray

#include "./category.hpp"
#include "../_internal/model.hpp"

#include "./double.hpp"
#include "./float.hpp"
#include "./ldouble.hpp"
#include "./uint16.hpp"
#include "./uint32.hpp"
#include "./uint64.hpp"
#include "./uint8.hpp"

namespace color
 {
  typedef ::color::_internal::model< ::color::category::gray_uint8   >  gray_uint8;
  typedef ::color::_internal::model< ::color::category::gray_uint16  >  gray_uint16;
  typedef ::color::_internal::model< ::color::category::gray_uint32  >  gray_uint32;
  typedef ::color::_internal::model< ::color::category::gray_uint64  >  gray_uint64;
  typedef ::color::_internal::model< ::color::category::gray_float   >  gray_float;
  typedef ::color::_internal::model< ::color::category::gray_double  >  gray_double;
  typedef ::color::_internal::model< ::color::category::gray_ldouble >  gray_ldouble;
 }

#endif