#ifndef color_gray_gray
#define color_gray_gray

#include "../_internal/model.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "./get/get.hpp"
//#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename type_name >
     struct pick_gray
      {
       typedef ::color::category::gray_uint32 category_type;
      };

    template<> struct pick_gray< bool           >{ typedef ::color::category::gray_bool    category_type; };
    template<> struct pick_gray< std::uint8_t   >{ typedef ::color::category::gray_uint8   category_type; };
    template<> struct pick_gray< std::uint16_t  >{ typedef ::color::category::gray_uint16  category_type; };
    template<> struct pick_gray< std::uint32_t  >{ typedef ::color::category::gray_uint32  category_type; };
    template<> struct pick_gray< std::uint64_t  >{ typedef ::color::category::gray_uint64  category_type; };
    template<> struct pick_gray< float          >{ typedef ::color::category::gray_float   category_type; };
    template<> struct pick_gray< double         >{ typedef ::color::category::gray_double  category_type; };
    template<> struct pick_gray< long    double >{ typedef ::color::category::gray_ldouble category_type; };
   }

  template< typename type_name >
   using gray = ::color::_internal::model< typename ::color::_internal::pick_gray< type_name >::category_type >;

 }

#endif
