#ifndef color_rgb_category_
#define color_rgb_category_

// ::color::category::rgb_ABC;

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct rgb_uint8   {};
      struct rgb_uint16  {};
      struct rgb_uint24  {};
      struct rgb_uint32  {};
      struct rgb_uint48  {};
      struct rgb_uint64  {};
      struct rgb_float   {};
      struct rgb_double  {};
      struct rgb_ldouble {};
     }

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
     struct rgb_scramble{};

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
      struct rgba_scramble{};

    template< typename tag_name >
     struct rgb
      {
       // typedef void category_name;
      };

    using rgb_uint8   = rgb< ::color::category::_internal::rgb_uint8   >;
    using rgb_uint16  = rgb< ::color::category::_internal::rgb_uint16  >;
    using rgb_uint24  = rgb< ::color::category::_internal::rgb_uint24  >;
    using rgb_uint32  = rgb< ::color::category::_internal::rgb_uint32  >;
    using rgb_uint48  = rgb< ::color::category::_internal::rgb_uint48  >;
    using rgb_uint64  = rgb< ::color::category::_internal::rgb_uint64  >;
    using rgb_float   = rgb< ::color::category::_internal::rgb_float   >;
    using rgb_double  = rgb< ::color::category::_internal::rgb_double  >;
    using rgb_ldouble = rgb< ::color::category::_internal::rgb_ldouble >;

    }
 }

#endif
