#ifndef color_YDbDr_YDbDr_
#define color_YDbDr_YDbDr_


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
     struct pick_YDbDr
      {
       typedef ::color::category::YDbDr_uint32 category_type;
      };


    template<> struct pick_YDbDr< std::uint8_t   >{ typedef ::color::category::YDbDr_uint8   category_type; };
    template<> struct pick_YDbDr< std::uint16_t  >{ typedef ::color::category::YDbDr_uint16  category_type; };
    template<> struct pick_YDbDr< std::uint32_t  >{ typedef ::color::category::YDbDr_uint32  category_type; };
    template<> struct pick_YDbDr< std::uint64_t  >{ typedef ::color::category::YDbDr_uint64  category_type; };
    template<> struct pick_YDbDr< float          >{ typedef ::color::category::YDbDr_float   category_type; };
    template<> struct pick_YDbDr< double         >{ typedef ::color::category::YDbDr_double  category_type; };
    template<> struct pick_YDbDr< long    double >{ typedef ::color::category::YDbDr_ldouble category_type; };
   }

  template< typename type_name >
   using YDbDr = ::color::model< typename ::color::_internal::pick_YDbDr< type_name >::category_type >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
