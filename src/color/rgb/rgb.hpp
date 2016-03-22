#ifndef color_rgb_rgb_
#define color_rgb_rgb_

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
     struct pick_rgb
      {
       typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint8_t, 0, 1, 2 > > category_type;
      };

    template<> struct pick_rgb< std::uint8_t   >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint8_t  , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< std::uint16_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint16_t , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< std::uint32_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint32_t , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< std::uint64_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint64_t , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< float          >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< float         , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< double         >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< double        , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< long    double >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< long    double, 0, 1, 2 > > category_type; };

    template<> struct pick_rgb< ::color::type::split233_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< ::color::type::split332_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t , 0, 1, 2 > > category_type; };

    template<> struct pick_rgb< ::color::type::split422_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t , 0, 1, 2 > > category_type; };

    template<> struct pick_rgb< ::color::type::split556_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< ::color::type::split565_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t , 0, 1, 2 > > category_type; };
    template<> struct pick_rgb< ::color::type::split655_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t , 0, 1, 2 > > category_type; };


    template< typename type_name >
     struct pick_rgba
      {
       typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 0, 1, 2, 3 > > category_type;
      };

    template<> struct pick_rgba< std::uint8_t   >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t  , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< std::uint16_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint16_t , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< std::uint32_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint32_t , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< std::uint64_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint64_t , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< float          >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< float         , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< double         >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< double        , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< long    double >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< long    double, 0, 1, 2, 3 > > category_type; };

    template<> struct pick_rgba< ::color::type::split2222_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< ::color::type::split4444_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< ::color::type::split8888_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t , 0, 1, 2, 3 > > category_type; };
    template<> struct pick_rgba< ::color::type::splitAAA2_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t , 0, 1, 2, 3 > > category_type; };
   }

  template< typename type_name >
   using rgb = ::color::model< typename ::color::_internal::pick_rgb< type_name >::category_type >;

  template< typename type_name >
   using rgba = ::color::model< typename ::color::_internal::pick_rgba< type_name >::category_type >;

  template< typename value_name >
   using argb = ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 1, 2, 3, 0 > > >;

  template< typename value_name >
   using bgr = ::color::model< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, 2, 1, 0 > > >;

  template< typename value_name >
   using bgra = ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 2, 1, 0, 3 > > >;

  template< typename value_name >
   using abgr = ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 3, 2, 1, 0 > > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
