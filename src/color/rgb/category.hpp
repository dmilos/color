#ifndef color_rgb_category_
#define color_rgb_category_

// ::color::category::rgb_ABC;
// ::color::category::rgb< tag >;
#include "../generic/type/split3.hpp"
#include "../generic/type/split4.hpp"
#include "../generic/category/category.hpp"




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct rgb
      {
       typedef tag_name tag_type;
      };

    template< typename tag_name >
     struct rgba
      : public ::color::category::rgb< tag_name >
      {
       typedef tag_name tag_type;
      };

    namespace _internal
     {
      template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
       struct rgb_scramble : public ::color::category::_internal::scramble3< red_position, green_position, blue_position > {};

      template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
        struct rgba_scramble : public ::color::category::_internal::scramble4< red_position, green_position, blue_position, alpha_position > {};

      using rgb_uint8   = ::color::category::_internal::rgb_scramble< std::uint8_t  ,   0, 1, 2 >;
      using rgb_uint16  = ::color::category::_internal::rgb_scramble< std::uint16_t ,   0, 1, 2 >;
      using rgb_uint32  = ::color::category::_internal::rgb_scramble< std::uint32_t ,   0, 1, 2 >;
      using rgb_uint64  = ::color::category::_internal::rgb_scramble< std::uint64_t ,   0, 1, 2 >;
      using rgb_float   = ::color::category::_internal::rgb_scramble<      float  ,     0, 1, 2 >;
      using rgb_double  = ::color::category::_internal::rgb_scramble<      double ,     0, 1, 2 >;
      using rgb_ldouble = ::color::category::_internal::rgb_scramble<      long double, 0, 1, 2 >;

      using rgb_split233 = ::color::category::_internal::rgb_scramble< ::color::type::split233_t , 0, 1, 2 >;
      using rgb_split323 = ::color::category::_internal::rgb_scramble< ::color::type::split323_t , 0, 1, 2 >;
      using rgb_split332 = ::color::category::_internal::rgb_scramble< ::color::type::split332_t , 0, 1, 2 >;
      using rgb_split422 = ::color::category::_internal::rgb_scramble< ::color::type::split422_t , 0, 1, 2 >;
      using rgb_split556 = ::color::category::_internal::rgb_scramble< ::color::type::split556_t , 0, 1, 2 >;
      using rgb_split565 = ::color::category::_internal::rgb_scramble< ::color::type::split565_t , 0, 1, 2 >;
      using rgb_split655 = ::color::category::_internal::rgb_scramble< ::color::type::split655_t , 0, 1, 2 >;
     }

    using rgb_uint8   = ::color::category::rgb< ::color::category::_internal::rgb_uint8   >;
    using rgb_uint16  = ::color::category::rgb< ::color::category::_internal::rgb_uint16  >;
    using rgb_uint32  = ::color::category::rgb< ::color::category::_internal::rgb_uint32  >;
    using rgb_uint64  = ::color::category::rgb< ::color::category::_internal::rgb_uint64  >;
    using rgb_float   = ::color::category::rgb< ::color::category::_internal::rgb_float   >;
    using rgb_double  = ::color::category::rgb< ::color::category::_internal::rgb_double  >;
    using rgb_ldouble = ::color::category::rgb< ::color::category::_internal::rgb_ldouble >;
    using rgb_split233  = ::color::category::rgb< ::color::category::_internal::rgb_split233  >;
    using rgb_split323  = ::color::category::rgb< ::color::category::_internal::rgb_split323  >;
    using rgb_split332  = ::color::category::rgb< ::color::category::_internal::rgb_split332  >;
    using rgb_split422  = ::color::category::rgb< ::color::category::_internal::rgb_split422  >;
    using rgb_split556  = ::color::category::rgb< ::color::category::_internal::rgb_split556  >;
    using rgb_split565  = ::color::category::rgb< ::color::category::_internal::rgb_split565  >;
    using rgb_split655  = ::color::category::rgb< ::color::category::_internal::rgb_split655  >;

    // using bgr_uint8   = ::color::category::rgb< ::color::category::_internal::bgr_uint8   >;
    // using bgr_uint16  = ::color::category::rgb< ::color::category::_internal::bgr_uint16  >;
    // using bgr_uint32  = ::color::category::rgb< ::color::category::_internal::bgr_uint32  >;
    // using bgr_uint64  = ::color::category::rgb< ::color::category::_internal::bgr_uint64  >;
    // using bgr_float   = ::color::category::rgb< ::color::category::_internal::bgr_float   >;
    // using bgr_double  = ::color::category::rgb< ::color::category::_internal::bgr_double  >;
    // using bgr_ldouble = ::color::category::rgb< ::color::category::_internal::bgr_ldouble >;
    // using bgr_split233  = ::color::category::rgb< ::color::category::_internal::bgr_split233  >;
    // using bgr_split323  = ::color::category::rgb< ::color::category::_internal::bgr_split323  >;
    // using bgr_split332  = ::color::category::rgb< ::color::category::_internal::bgr_split332  >;
    // using bgr_split422  = ::color::category::rgb< ::color::category::_internal::bgr_split422  >;
    // using bgr_split556  = ::color::category::rgb< ::color::category::_internal::bgr_split556  >;
    // using bgr_split565  = ::color::category::rgb< ::color::category::_internal::bgr_split565  >;
    // using bgr_split655  = ::color::category::rgb< ::color::category::_internal::bgr_split655  >;

    //using rgba_uint8     = ::color::category::rgba< ::color::category::_internal::rgba_uint8     >;
    //using rgba_uint16    = ::color::category::rgba< ::color::category::_internal::rgba_uint16    >;
    //using rgba_uint32    = ::color::category::rgba< ::color::category::_internal::rgba_uint32    >;
    //using rgba_uint64    = ::color::category::rgba< ::color::category::_internal::rgba_uint64    >;
    //using rgba_float     = ::color::category::rgba< ::color::category::_internal::rgba_float     >;
    //using rgba_double    = ::color::category::rgba< ::color::category::_internal::rgba_double    >;
    //using rgba_ldouble   = ::color::category::rgba< ::color::category::_internal::rgba_ldouble   >;
    //using rgba_splitAAA2 = ::color::category::rgba< ::color::category::_internal::rgba_splitAAA2 >;
    //using rgba_split5551 = ::color::category::rgba< ::color::category::_internal::rgba_split5551 >;
    //using rgba_splitGGGG = ::color::category::rgba< ::color::category::_internal::rgba_splitGGGG >;

    //using argb_uint8     = ::color::category::rgba< ::color::category::_internal::argb_uint8     >;
    //using argb_uint16    = ::color::category::rgba< ::color::category::_internal::argb_uint16    >;
    //using argb_uint32    = ::color::category::rgba< ::color::category::_internal::argb_uint32    >;
    //using argb_uint64    = ::color::category::rgba< ::color::category::_internal::argb_uint64    >;
    //using argb_float     = ::color::category::rgba< ::color::category::_internal::argb_float     >;
    //using argb_double    = ::color::category::rgba< ::color::category::_internal::argb_double    >;
    //using argb_ldouble   = ::color::category::rgba< ::color::category::_internal::argb_ldouble   >;
    //using argb_split2AAA = ::color::category::rgba< ::color::category::_internal::argb_split2AAA >;
    //using argb_split1555 = ::color::category::rgba< ::color::category::_internal::argb_split1555 >;
    //using argb_splitGGGG = ::color::category::rgba< ::color::category::_internal::argb_splitGGGG >;

   }
 }

#endif
