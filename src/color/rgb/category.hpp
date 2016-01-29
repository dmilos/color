#ifndef color_rgb_category_
#define color_rgb_category_

// ::color::category::rgb_ABC;

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct rgb
      {
       // typedef void category_name;
      };

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
     struct rgb_scramble{};

    namespace _internal
     {
      using rgb_uint8   = color::category::rgb_scramble< std::uint8_t  ,   0, 1, 2 >;
      using rgb_uint16  = color::category::rgb_scramble< std::uint16_t ,   0, 1, 2 >;
      using rgb_uint32  = color::category::rgb_scramble< std::uint32_t ,   0, 1, 2 >;
      using rgb_uint64  = color::category::rgb_scramble< std::uint64_t ,   0, 1, 2 >;
      using rgb_float   = color::category::rgb_scramble<      float  ,     0, 1, 2 >;
      using rgb_double  = color::category::rgb_scramble<      double ,     0, 1, 2 >;
      using rgb_ldouble = color::category::rgb_scramble<      long double, 0, 1, 2 >;
     }

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
      struct rgba_scramble{};

    using rgb_uint8   = rgb< ::color::category::_internal::rgb_uint8   >;
    using rgb_uint16  = rgb< ::color::category::_internal::rgb_uint16  >;
    using rgb_uint32  = rgb< ::color::category::_internal::rgb_uint32  >;
    using rgb_uint64  = rgb< ::color::category::_internal::rgb_uint64  >;
    using rgb_float   = rgb< ::color::category::_internal::rgb_float   >;
    using rgb_double  = rgb< ::color::category::_internal::rgb_double  >;
    using rgb_ldouble = rgb< ::color::category::_internal::rgb_ldouble >;

   }
 }

#endif
