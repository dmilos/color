#ifndef color_hsl_hsl_
#define color_hsl_hsl_

#include "../_internal/model.hpp"


#include "./category.hpp"
#include "./place/place.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "./get/get.hpp"
//#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"
#include "./check/check.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename type_name >
     struct pick_hsl
      {
       typedef ::color::category::hsl_uint32 category_type;
      };


    template<> struct pick_hsl< std::uint8_t   >{ typedef ::color::category::hsl_uint8   category_type; };
    template<> struct pick_hsl< std::uint16_t  >{ typedef ::color::category::hsl_uint16  category_type; };
    template<> struct pick_hsl< std::uint32_t  >{ typedef ::color::category::hsl_uint32  category_type; };
    template<> struct pick_hsl< std::uint64_t  >{ typedef ::color::category::hsl_uint64  category_type; };
    template<> struct pick_hsl< float          >{ typedef ::color::category::hsl_float   category_type; };
    template<> struct pick_hsl< double         >{ typedef ::color::category::hsl_double  category_type; };
    template<> struct pick_hsl< long    double >{ typedef ::color::category::hsl_ldouble category_type; };
   }

  template< typename type_name >
   using hsl = ::color::_internal::model< typename ::color::_internal::pick_hsl< type_name >::category_type >;

 }

#endif 