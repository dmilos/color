#ifndef color_YCgCo_YCgCo_
#define color_YCgCo_YCgCo_


#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename type_name >
     struct pick_YCgCo
      {
       typedef ::color::category::YCgCo_uint32 category_type;
      };


    template<> struct pick_YCgCo< std::uint8_t   >{ typedef ::color::category::YCgCo_uint8   category_type; };
    template<> struct pick_YCgCo< std::uint16_t  >{ typedef ::color::category::YCgCo_uint16  category_type; };
    template<> struct pick_YCgCo< std::uint32_t  >{ typedef ::color::category::YCgCo_uint32  category_type; };
    template<> struct pick_YCgCo< std::uint64_t  >{ typedef ::color::category::YCgCo_uint64  category_type; };
    template<> struct pick_YCgCo< float          >{ typedef ::color::category::YCgCo_float   category_type; };
    template<> struct pick_YCgCo< double         >{ typedef ::color::category::YCgCo_double  category_type; };
    template<> struct pick_YCgCo< long    double >{ typedef ::color::category::YCgCo_ldouble category_type; };
   }

  template< typename type_name >
   using YCgCo = ::color::model< typename ::color::_internal::pick_YCgCo< type_name >::category_type >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
