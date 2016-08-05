#ifndef color_YCbCr_YCbCr_
#define color_YCbCr_YCbCr_


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
     struct pick_YCbCr
      {
       typedef ::color::category::YCbCr_uint32 category_type;
      };


    template<> struct pick_YCbCr< std::uint8_t   >{ typedef ::color::category::YCbCr_uint8   category_type; };
    template<> struct pick_YCbCr< std::uint16_t  >{ typedef ::color::category::YCbCr_uint16  category_type; };
    template<> struct pick_YCbCr< std::uint32_t  >{ typedef ::color::category::YCbCr_uint32  category_type; };
    template<> struct pick_YCbCr< std::uint64_t  >{ typedef ::color::category::YCbCr_uint64  category_type; };
    template<> struct pick_YCbCr< float          >{ typedef ::color::category::YCbCr_float   category_type; };
    template<> struct pick_YCbCr< double         >{ typedef ::color::category::YCbCr_double  category_type; };
    template<> struct pick_YCbCr< long    double >{ typedef ::color::category::YCbCr_ldouble category_type; };
   }

  template< typename type_name >
   using YCbCr = ::color::model< typename ::color::_internal::pick_YCbCr< type_name >::category_type >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
