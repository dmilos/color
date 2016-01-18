#ifndef color_cmyk_cmyk_
#define color_cmyk_cmyk_

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
     struct pick_cmyk
      {
       typedef ::color::category::cmyk_uint32 category_type;
      };


    template<> struct pick_cmyk< std::uint8_t   >{ typedef ::color::category::cmyk_uint8   category_type; };
    template<> struct pick_cmyk< std::uint16_t  >{ typedef ::color::category::cmyk_uint16  category_type; };
    template<> struct pick_cmyk< std::uint32_t  >{ typedef ::color::category::cmyk_uint32  category_type; };
    template<> struct pick_cmyk< std::uint64_t  >{ typedef ::color::category::cmyk_uint64  category_type; };
    template<> struct pick_cmyk< float          >{ typedef ::color::category::cmyk_float   category_type; };
    template<> struct pick_cmyk< double         >{ typedef ::color::category::cmyk_double  category_type; };
    template<> struct pick_cmyk< long    double >{ typedef ::color::category::cmyk_ldouble category_type; };
   }

  template< typename type_name >
   using cmyk = ::color::_internal::model< typename ::color::_internal::pick_cmyk< type_name >::category_type >;

 }

#endif
