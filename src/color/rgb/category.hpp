#ifndef color_rgb_category_
#define color_rgb_category_

// ::color::category::rgb_ABC;
// ::color::category::rgb< tag >;
#include "../generic/type/scramble.hpp"
#include "../generic/type/pack3.hpp"
#include "../generic/type/pack4.hpp"
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
       struct rgb_scramble : public ::color::type::scramble3< red_position, green_position, blue_position > {};

      template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
        struct rgba_scramble : public ::color::type::scramble4< red_position, green_position, blue_position, alpha_position > {};
     }

    // RGB
    namespace _internal
     {
      using rgb_error   = ::color::category::_internal::rgb_scramble< ::color::type::error_t,      0, 1, 2 >;

      using rgb_uint8   = ::color::category::_internal::rgb_scramble< std::uint8_t  ,              0, 1, 2 >;
      using rgb_uint16  = ::color::category::_internal::rgb_scramble< std::uint16_t ,              0, 1, 2 >;
      using rgb_uint32  = ::color::category::_internal::rgb_scramble< std::uint32_t ,              0, 1, 2 >;
      using rgb_uint64  = ::color::category::_internal::rgb_scramble< std::uint64_t ,              0, 1, 2 >;
      using rgb_float   = ::color::category::_internal::rgb_scramble<      float  ,                0, 1, 2 >;
      using rgb_double  = ::color::category::_internal::rgb_scramble<      double ,                0, 1, 2 >;
      using rgb_ldouble = ::color::category::_internal::rgb_scramble<      long double,            0, 1, 2 >;

      template < unsigned red_size, unsigned green_size, unsigned blue_size >
       using rgb_pack = ::color::category::_internal::rgb_scramble< ::color::type::pack3< red_size, green_size, blue_size  >, 0, 1, 2 >;
     }

    using rgb_error     = ::color::category::rgb< ::color::category::_internal::rgb_error     >;
    using rgb_uint8     = ::color::category::rgb< ::color::category::_internal::rgb_uint8     >;
    using rgb_uint16    = ::color::category::rgb< ::color::category::_internal::rgb_uint16    >;
    using rgb_uint32    = ::color::category::rgb< ::color::category::_internal::rgb_uint32    >;
    using rgb_uint64    = ::color::category::rgb< ::color::category::_internal::rgb_uint64    >;
    using rgb_float     = ::color::category::rgb< ::color::category::_internal::rgb_float     >;
    using rgb_double    = ::color::category::rgb< ::color::category::_internal::rgb_double    >;
    using rgb_ldouble   = ::color::category::rgb< ::color::category::_internal::rgb_ldouble   >;

    template < unsigned red_size, unsigned green_size, unsigned blue_size >
     using rgb_pack = ::color::category::rgb< ::color::category::_internal::rgb_pack< red_size, green_size, blue_size > >;

    // RGBA
    namespace _internal
     {
      using rgba_error   = ::color::category::_internal::rgba_scramble< ::color::type::error_t,       0, 1, 2, 3 >;

      using rgba_uint8     = ::color::category::_internal::rgba_scramble< std::uint8_t  ,             0, 1, 2, 3 >;
      using rgba_uint16    = ::color::category::_internal::rgba_scramble< std::uint16_t ,             0, 1, 2, 3 >;
      using rgba_uint32    = ::color::category::_internal::rgba_scramble< std::uint32_t ,             0, 1, 2, 3 >;
      using rgba_uint64    = ::color::category::_internal::rgba_scramble< std::uint64_t ,             0, 1, 2, 3 >;
      using rgba_float     = ::color::category::_internal::rgba_scramble<      float  ,               0, 1, 2, 3 >;
      using rgba_double    = ::color::category::_internal::rgba_scramble<      double ,               0, 1, 2, 3 >;
      using rgba_ldouble   = ::color::category::_internal::rgba_scramble<      long double,           0, 1, 2, 3 >;

      template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
       using rgba_pack = ::color::category::_internal::rgba_scramble< ::color::type::pack4< red_size, green_size, blue_size, alpha_size >, 0, 1, 2, 3 >;
     }

    using rgba_error     = ::color::category::rgb< ::color::category::_internal::rgba_error     >;
    using rgba_uint8     = ::color::category::rgb< ::color::category::_internal::rgba_uint8     >;
    using rgba_uint16    = ::color::category::rgb< ::color::category::_internal::rgba_uint16    >;
    using rgba_uint32    = ::color::category::rgb< ::color::category::_internal::rgba_uint32    >;
    using rgba_uint64    = ::color::category::rgb< ::color::category::_internal::rgba_uint64    >;
    using rgba_float     = ::color::category::rgb< ::color::category::_internal::rgba_float     >;
    using rgba_double    = ::color::category::rgb< ::color::category::_internal::rgba_double    >;
    using rgba_ldouble   = ::color::category::rgb< ::color::category::_internal::rgba_ldouble   >;

    template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
     using rgba_pack = ::color::category::rgb< ::color::category::_internal::rgba_pack< red_size, green_size, blue_size, alpha_size > >;

    // ARGB
    namespace _internal
     {
      using argb_error     = ::color::category::_internal::rgba_scramble< ::color::type::error_t,     3, 0, 1, 2 >;

      using argb_uint8     = ::color::category::_internal::rgba_scramble< std::uint8_t  ,             3, 0, 1, 2 >;
      using argb_uint16    = ::color::category::_internal::rgba_scramble< std::uint16_t ,             3, 0, 1, 2 >;
      using argb_uint32    = ::color::category::_internal::rgba_scramble< std::uint32_t ,             3, 0, 1, 2 >;
      using argb_uint64    = ::color::category::_internal::rgba_scramble< std::uint64_t ,             3, 0, 1, 2 >;
      using argb_float     = ::color::category::_internal::rgba_scramble<      float  ,               3, 0, 1, 2 >;
      using argb_double    = ::color::category::_internal::rgba_scramble<      double ,               3, 0, 1, 2 >;
      using argb_ldouble   = ::color::category::_internal::rgba_scramble<      long double,           3, 0, 1, 2 >;

      template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
       using argb_pack = ::color::category::_internal::rgba_scramble< ::color::type::pack4< red_size, green_size, blue_size, alpha_size >, 3, 0, 1, 2 >;
     }

    using argb_error     = ::color::category::rgb< ::color::category::_internal::argb_error     >;
    using argb_uint8     = ::color::category::rgb< ::color::category::_internal::argb_uint8     >;
    using argb_uint16    = ::color::category::rgb< ::color::category::_internal::argb_uint16    >;
    using argb_uint32    = ::color::category::rgb< ::color::category::_internal::argb_uint32    >;
    using argb_uint64    = ::color::category::rgb< ::color::category::_internal::argb_uint64    >;
    using argb_float     = ::color::category::rgb< ::color::category::_internal::argb_float     >;
    using argb_double    = ::color::category::rgb< ::color::category::_internal::argb_double    >;
    using argb_ldouble   = ::color::category::rgb< ::color::category::_internal::argb_ldouble   >;

    template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
     using argb_pack = ::color::category::rgb< ::color::category::_internal::argb_pack< red_size, green_size, blue_size, alpha_size > >;

    // BGR
    namespace _internal
     {
      using bgr_error   = ::color::category::_internal::rgb_scramble< ::color::type::error_t,      2, 1, 0 >;

      using bgr_uint8   = ::color::category::_internal::rgb_scramble< std::uint8_t  ,              2, 1, 0 >;
      using bgr_uint16  = ::color::category::_internal::rgb_scramble< std::uint16_t ,              2, 1, 0 >;
      using bgr_uint32  = ::color::category::_internal::rgb_scramble< std::uint32_t ,              2, 1, 0 >;
      using bgr_uint64  = ::color::category::_internal::rgb_scramble< std::uint64_t ,              2, 1, 0 >;
      using bgr_float   = ::color::category::_internal::rgb_scramble<      float  ,                2, 1, 0 >;
      using bgr_double  = ::color::category::_internal::rgb_scramble<      double ,                2, 1, 0 >;
      using bgr_ldouble = ::color::category::_internal::rgb_scramble<      long double,            2, 1, 0 >;

      template < unsigned red_size, unsigned green_size, unsigned blue_size >
       using bgr_pack = ::color::category::_internal::rgb_scramble< ::color::type::pack3< red_size, green_size, blue_size>, 2, 1, 0 >;
     }

    using bgr_error     = ::color::category::rgb< ::color::category::_internal::bgr_error     >;
    using bgr_uint8     = ::color::category::rgb< ::color::category::_internal::bgr_uint8     >;
    using bgr_uint16    = ::color::category::rgb< ::color::category::_internal::bgr_uint16    >;
    using bgr_uint32    = ::color::category::rgb< ::color::category::_internal::bgr_uint32    >;
    using bgr_uint64    = ::color::category::rgb< ::color::category::_internal::bgr_uint64    >;
    using bgr_float     = ::color::category::rgb< ::color::category::_internal::bgr_float     >;
    using bgr_double    = ::color::category::rgb< ::color::category::_internal::bgr_double    >;
    using bgr_ldouble   = ::color::category::rgb< ::color::category::_internal::bgr_ldouble   >;

    template < unsigned red_size, unsigned green_size, unsigned blue_size >
     using bgr_pack = ::color::category::rgb< ::color::category::_internal::bgr_pack< red_size, green_size, blue_size > >;

    // BGRA
    namespace _internal
     {
      using bgra_error     = ::color::category::_internal::rgba_scramble< ::color::type::error_t,     2, 1, 0, 3 >;
      using bgra_uint8     = ::color::category::_internal::rgba_scramble< std::uint8_t  ,             2, 1, 0, 3 >;
      using bgra_uint16    = ::color::category::_internal::rgba_scramble< std::uint16_t ,             2, 1, 0, 3 >;
      using bgra_uint32    = ::color::category::_internal::rgba_scramble< std::uint32_t ,             2, 1, 0, 3 >;
      using bgra_uint64    = ::color::category::_internal::rgba_scramble< std::uint64_t ,             2, 1, 0, 3 >;
      using bgra_float     = ::color::category::_internal::rgba_scramble< float         ,             2, 1, 0, 3 >;
      using bgra_double    = ::color::category::_internal::rgba_scramble< double        ,             2, 1, 0, 3 >;
      using bgra_ldouble   = ::color::category::_internal::rgba_scramble< long    double,             2, 1, 0, 3 >;

      template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
       using bgra_pack = ::color::category::_internal::rgba_scramble< ::color::type::pack4< red_size, green_size, blue_size, alpha_size>, 2, 1, 0, 3 >;
     }

    using bgra_error      = ::color::category::rgb< ::color::category::_internal::bgra_error     >;
    using bgra_uint8      = ::color::category::rgb< ::color::category::_internal::bgra_uint8     >;
    using bgra_uint16     = ::color::category::rgb< ::color::category::_internal::bgra_uint16    >;
    using bgra_uint32     = ::color::category::rgb< ::color::category::_internal::bgra_uint32    >;
    using bgra_uint64     = ::color::category::rgb< ::color::category::_internal::bgra_uint64    >;
    using bgra_float      = ::color::category::rgb< ::color::category::_internal::bgra_float     >;
    using bgra_double     = ::color::category::rgb< ::color::category::_internal::bgra_double    >;
    using bgra_ldouble    = ::color::category::rgb< ::color::category::_internal::bgra_ldouble   >;

    template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
     using bgra_pack = ::color::category::rgb< ::color::category::_internal::bgra_pack< red_size, green_size, blue_size, alpha_size > >;

    // ABGR
    namespace _internal
     {
      using abgr_error   = ::color::category::_internal::rgba_scramble< ::color::type::error_t,       3, 2, 1, 0 >;
      using abgr_uint8   = ::color::category::_internal::rgba_scramble< std::uint8_t  ,               3, 2, 1, 0 >;
      using abgr_uint16  = ::color::category::_internal::rgba_scramble< std::uint16_t ,               3, 2, 1, 0 >;
      using abgr_uint32  = ::color::category::_internal::rgba_scramble< std::uint32_t ,               3, 2, 1, 0 >;
      using abgr_uint64  = ::color::category::_internal::rgba_scramble< std::uint64_t ,               3, 2, 1, 0 >;
      using abgr_float   = ::color::category::_internal::rgba_scramble< float         ,               3, 2, 1, 0 >;
      using abgr_double  = ::color::category::_internal::rgba_scramble< double        ,               3, 2, 1, 0 >;
      using abgr_ldouble = ::color::category::_internal::rgba_scramble< long    double,               3, 2, 1, 0 >;

      template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
       using abgr_pack = ::color::category::_internal::rgba_scramble< ::color::type::pack4< red_size, green_size, blue_size, alpha_size>, 3, 2, 1, 0 >;
     }

    using abgr_error      = ::color::category::rgb< ::color::category::_internal::abgr_error      >;
    using abgr_uint8      = ::color::category::rgb< ::color::category::_internal::abgr_uint8      >;
    using abgr_uint16     = ::color::category::rgb< ::color::category::_internal::abgr_uint16     >;
    using abgr_uint32     = ::color::category::rgb< ::color::category::_internal::abgr_uint32     >;
    using abgr_uint64     = ::color::category::rgb< ::color::category::_internal::abgr_uint64     >;
    using abgr_float      = ::color::category::rgb< ::color::category::_internal::abgr_float      >;
    using abgr_double     = ::color::category::rgb< ::color::category::_internal::abgr_double     >;
    using abgr_ldouble    = ::color::category::rgb< ::color::category::_internal::abgr_ldouble    >;

    template < unsigned red_size, unsigned green_size, unsigned blue_size, unsigned alpha_size >
     using abgr_pack = ::color::category::rgb< ::color::category::_internal::abgr_pack< red_size, green_size, blue_size, alpha_size > >;

   }
 }

#endif
