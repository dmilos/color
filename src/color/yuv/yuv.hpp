#ifndef color_yuv_yuv_
#define color_yuv_yuv_

#include "../_internal/model.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "./get/get.hpp"
//#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"
#include "./constant.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename type_name >
     struct pick_yuv
      {
       typedef ::color::category::yuv_uint32 category_type;
      };


    template<> struct pick_yuv< std::uint8_t   >{ typedef ::color::category::yuv_uint8   category_type; };
    template<> struct pick_yuv< std::uint16_t  >{ typedef ::color::category::yuv_uint16  category_type; };
    template<> struct pick_yuv< std::uint32_t  >{ typedef ::color::category::yuv_uint32  category_type; };
    template<> struct pick_yuv< std::uint64_t  >{ typedef ::color::category::yuv_uint64  category_type; };
    template<> struct pick_yuv< float          >{ typedef ::color::category::yuv_float   category_type; };
    template<> struct pick_yuv< double         >{ typedef ::color::category::yuv_double  category_type; };
    template<> struct pick_yuv< long    double >{ typedef ::color::category::yuv_ldouble category_type; };
   }

  template< typename type_name >
   using yuv = ::color::_internal::model< typename ::color::_internal::pick_yuv< type_name >::category_type >;

 }

#endif
