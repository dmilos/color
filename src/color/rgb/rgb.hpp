#ifndef color_rgb_rgb_
#define color_rgb_rgb_

#include "../_internal/model.hpp"
#include "../generic/type/uint24.hpp"
#include "../generic/type/uint48.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"



namespace color
 {
  namespace _internal
   {

    template< typename type_name >
     struct pick_rgb
      {
       typedef ::color::category::rgb_uint32 category_type;
      };


    template<> struct pick_rgb< std::uint8_t   >{ typedef ::color::category::rgb_uint8   category_type; };
    template<> struct pick_rgb< std::uint16_t  >{ typedef ::color::category::rgb_uint16  category_type; };
    template<> struct pick_rgb< std::uint32_t  >{ typedef ::color::category::rgb_uint32  category_type; };
    template<> struct pick_rgb< std::uint64_t  >{ typedef ::color::category::rgb_uint64  category_type; };
    template<> struct pick_rgb< float          >{ typedef ::color::category::rgb_float   category_type; };
    template<> struct pick_rgb< double         >{ typedef ::color::category::rgb_double  category_type; };
    template<> struct pick_rgb< long    double >{ typedef ::color::category::rgb_ldouble category_type; };

   }

  template< typename value_name >
   // using rgb = ::color::_internal::model< typename ::color::_internal::pick_rgb< type_name >::category_type >;
   using rgb = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_scramble< value_name, 0, 1, 2 > > >;

  template< typename value_name >
   using bgr = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_scramble< value_name, 2, 1, 0 > > >;

  template< typename value_name >
   using bgra = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 2, 1, 0, 3 > > >;

  template< typename value_name >
   using abgr = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 3, 2, 1, 0 > > >;

  template< typename value_name >
   using rgba = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 0, 1, 2, 3 > > >;

  template< typename value_name >
   using argb = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 1, 2, 3, 0 > > >;

   // using rgb442  = ::color::_internal::model< TODO >;
   // using rgb556  = ::color::_internal::model< TODO >;
   // using rgb655  = ::color::_internal::model< TODO >;
   // using rgb556  = ::color::_internal::model< TODO >;
   // using rgbAAA2 = ::color::_internal::model< TODO >;
 }

#endif
