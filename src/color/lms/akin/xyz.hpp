#ifndef color_xyz_akin_xyz
#define color_xyz_akin_xyz

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct lms< ::color::category::xyz_uint8   >{ typedef ::color::category::lms_uint8   akin_type; };
    template< >struct lms< ::color::category::xyz_uint16  >{ typedef ::color::category::lms_uint16  akin_type; };
    template< >struct lms< ::color::category::xyz_uint32  >{ typedef ::color::category::lms_uint32  akin_type; };
    template< >struct lms< ::color::category::xyz_uint64  >{ typedef ::color::category::lms_uint64  akin_type; };
    template< >struct lms< ::color::category::xyz_float   >{ typedef ::color::category::lms_float   akin_type; };
    template< >struct lms< ::color::category::xyz_double  >{ typedef ::color::category::lms_double  akin_type; };
    template< >struct lms< ::color::category::xyz_ldouble >{ typedef ::color::category::lms_ldouble akin_type; };

   }
 }

#endif
