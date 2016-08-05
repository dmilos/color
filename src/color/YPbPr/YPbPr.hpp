#ifndef color_YPbPr_YPbPr_
#define color_YPbPr_YPbPr_


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
     struct pick_YPbPr
      {
       typedef ::color::category::YPbPr_uint32 category_type;
      };


    template<> struct pick_YPbPr< std::uint8_t   >{ typedef ::color::category::YPbPr_uint8   category_type; };
    template<> struct pick_YPbPr< std::uint16_t  >{ typedef ::color::category::YPbPr_uint16  category_type; };
    template<> struct pick_YPbPr< std::uint32_t  >{ typedef ::color::category::YPbPr_uint32  category_type; };
    template<> struct pick_YPbPr< std::uint64_t  >{ typedef ::color::category::YPbPr_uint64  category_type; };
    template<> struct pick_YPbPr< float          >{ typedef ::color::category::YPbPr_float   category_type; };
    template<> struct pick_YPbPr< double         >{ typedef ::color::category::YPbPr_double  category_type; };
    template<> struct pick_YPbPr< long    double >{ typedef ::color::category::YPbPr_ldouble category_type; };
   }

  template< typename type_name >
   using YPbPr = ::color::model< typename ::color::_internal::pick_YPbPr< type_name >::category_type >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
