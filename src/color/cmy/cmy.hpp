#ifndef color_cmy_cmy_
#define color_cmy_cmy_

#include "../generic/type/type.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



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
   using cmy = ::color::model< typename ::color::_internal::pick_cmy< type_name >::category_type >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
