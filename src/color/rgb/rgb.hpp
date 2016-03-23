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
    template<> struct pick_rgba< ::color::type::splitGGGG_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t , 0, 1, 2, 3 > > category_type; };

    template< typename type_name >
     struct pick_argb
      {
       typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 3, 0, 1, 2 > > category_type;
      };

    template<> struct pick_argb< std::uint8_t   >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t  , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< std::uint16_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint16_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< std::uint32_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint32_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< std::uint64_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint64_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< float          >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< float         , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< double         >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< double        , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< long    double >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< long    double, 3, 0, 1, 2 > > category_type; };

    template<> struct pick_argb< ::color::type::split2222_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< ::color::type::split4444_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< ::color::type::split8888_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< ::color::type::split2AAA_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t , 3, 0, 1, 2 > > category_type; };
    template<> struct pick_argb< ::color::type::splitGGGG_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t , 3, 0, 1, 2 > > category_type; };

    template< typename type_name >
     struct pick_bgr
      {
       typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint8_t, 2, 1, 0 > > category_type;
      };

    template<> struct pick_bgr< std::uint8_t   >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint8_t  , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< std::uint16_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint16_t , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< std::uint32_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint32_t , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< std::uint64_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint64_t , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< float          >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< float         , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< double         >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< double        , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< long    double >{ typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< long    double, 2, 1, 0 > > category_type; };

    template<> struct pick_bgr< ::color::type::split233_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< ::color::type::split332_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t , 2, 1, 0 > > category_type; };

    template<> struct pick_bgr< ::color::type::split422_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t , 2, 1, 0 > > category_type; };

    template<> struct pick_bgr< ::color::type::split556_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< ::color::type::split565_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t , 2, 1, 0 > > category_type; };
    template<> struct pick_bgr< ::color::type::split655_t  > { typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t , 2, 1, 0 > > category_type; };

    template< typename type_name >
     struct pick_bgra
      {
       typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 2, 1, 0, 3 > > category_type;
      };

    template<> struct pick_bgra< std::uint8_t   >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t  , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< std::uint16_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint16_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< std::uint32_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint32_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< std::uint64_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint64_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< float          >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< float         , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< double         >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< double        , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< long    double >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< long    double, 2, 1, 0, 3 > > category_type; };

    template<> struct pick_bgra< ::color::type::split2222_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< ::color::type::split4444_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< ::color::type::split8888_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< ::color::type::splitAAA2_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t , 2, 1, 0, 3 > > category_type; };
    template<> struct pick_bgra< ::color::type::splitGGGG_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t , 2, 1, 0, 3 > > category_type; };

    template< typename type_name >
     struct pick_abgr
      {
       typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 3, 2, 1, 0 > > category_type;
      };

    template<> struct pick_abgr< std::uint8_t   >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t  , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< std::uint16_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint16_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< std::uint32_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint32_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< std::uint64_t  >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint64_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< float          >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< float         , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< double         >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< double        , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< long    double >{ typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< long    double, 3, 2, 1, 0 > > category_type; };

    template<> struct pick_abgr< ::color::type::split2222_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< ::color::type::split4444_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< ::color::type::split8888_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< ::color::type::split2AAA_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t , 3, 2, 1, 0 > > category_type; };
    template<> struct pick_abgr< ::color::type::splitGGGG_t > { typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t , 3, 2, 1, 0 > > category_type; };

   }

  template< typename type_name >
   using rgb = ::color::model< typename ::color::_internal::pick_rgb< type_name >::category_type >;

  template< typename type_name >
   using rgba = ::color::model< typename ::color::_internal::pick_rgba< type_name >::category_type >;

  template< typename type_name >
   using argb = ::color::model< typename ::color::_internal::pick_argb< type_name >::category_type >;

  template< typename type_name >
   using bgr = ::color::model< typename ::color::_internal::pick_bgr< type_name >::category_type >;

  template< typename type_name >
   using bgra = ::color::model< typename ::color::_internal::pick_bgra< type_name >::category_type >;

  template< typename type_name >
   using abgr = ::color::model< typename ::color::_internal::pick_abgr< type_name >::category_type >;

 }




#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif
