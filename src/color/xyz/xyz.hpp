#ifndef color_xyz_xyz_
#define color_xyz_xyz_

#include "../_internal/model.hpp"

#include "./category.hpp"

#include "./uint8.hpp"
#include "./uint16.hpp"
#include "./uint32.hpp"
#include "./uint64.hpp"
#include "./float.hpp"
#include "./double.hpp"
#include "./ldouble.hpp"

#include "./make/make.hpp"
#include "./convert/convert.hpp"

namespace color
 {
  namespace _internal
   {
    template< typename type_name > struct pick_xyz
     {
      typedef color::category::xyz_uint32 category_type;
     };

    template<> struct pick_xyz< std::uint8_t   >{ typedef ::color::category::xyz_uint8   category_type; };
    template<> struct pick_xyz< std::uint16_t  >{ typedef ::color::category::xyz_uint16  category_type; };
    template<> struct pick_xyz< std::uint32_t  >{ typedef ::color::category::xyz_uint32  category_type; };
    template<> struct pick_xyz< std::uint64_t  >{ typedef ::color::category::xyz_uint64  category_type; };
    template<> struct pick_xyz< float          >{ typedef ::color::category::xyz_float   category_type; };
    template<> struct pick_xyz< double         >{ typedef ::color::category::xyz_double  category_type; };
    template<> struct pick_xyz< long    double >{ typedef ::color::category::xyz_ldouble category_type; };
   }

  template< typename type_name >
   using xyz = color::_internal::model< typename color::_internal::pick_xyz< type_name >::category_type >;

 }

#endif 