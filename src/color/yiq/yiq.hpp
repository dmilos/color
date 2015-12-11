#ifndef color_yiq_yiq_289d3a0b_06c8_48de_95d2_0b38ad3d4298
#define color_yiq_yiq_289d3a0b_06c8_48de_95d2_0b38ad3d4298

#include "../_internal/model.hpp"

#include "./category.hpp"

#include "./uint16.hpp"
#include "./uint32.hpp"
#include "./uint64.hpp"
#include "./float.hpp"
#include "./double.hpp"
#include "./ldouble.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"
#include "./make/make.hpp"

namespace color
 {
  namespace _internal
   {
    template< typename type_name > struct pick_yiq
     {
         typedef color::category::yiq_uint32 category_type;
     };

    template<> struct pick_yiq< std::uint8_t   >{ typedef ::color::category::yiq_uint8   category_type; };
    template<> struct pick_yiq< std::uint16_t  >{ typedef ::color::category::yiq_uint16  category_type; };
    template<> struct pick_yiq< std::uint32_t  >{ typedef ::color::category::yiq_uint32  category_type; };
    template<> struct pick_yiq< std::uint64_t  >{ typedef ::color::category::yiq_uint64  category_type; };
    template<> struct pick_yiq< float          >{ typedef ::color::category::yiq_float   category_type; };
    template<> struct pick_yiq< double         >{ typedef ::color::category::yiq_double  category_type; };
    template<> struct pick_yiq< long    double >{ typedef ::color::category::yiq_ldouble category_type; };
   }

  template< typename type_name >
   using yiq = color::_internal::model< typename color::_internal::pick_yiq< type_name >::category_type >;

 }

#endif
