#ifndef color_cmy_cmy_
#define color_cmy_cmy_

#include "../_internal/model.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename type_name >
     struct pick_cmy
      {
       typedef ::color::category::cmy_uint32 category_type;
      };


    template<> struct pick_cmy< std::uint8_t   >{ typedef ::color::category::cmy_uint8   category_type; };
    template<> struct pick_cmy< std::uint16_t  >{ typedef ::color::category::cmy_uint16  category_type; };
    template<> struct pick_cmy< std::uint32_t  >{ typedef ::color::category::cmy_uint32  category_type; };
    template<> struct pick_cmy< std::uint64_t  >{ typedef ::color::category::cmy_uint64  category_type; };
    template<> struct pick_cmy< float          >{ typedef ::color::category::cmy_float   category_type; };
    template<> struct pick_cmy< double         >{ typedef ::color::category::cmy_double  category_type; };
    template<> struct pick_cmy< long    double >{ typedef ::color::category::cmy_ldouble category_type; };
   }

  template< typename type_name >
   using cmy = ::color::_internal::model< typename ::color::_internal::pick_cmy< type_name >::category_type >;

 }

#endif
