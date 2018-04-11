#ifndef color_rgb_rgb_
#define color_rgb_rgb_
// RGB: red, green, blue


#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"


namespace color
 {
  namespace _internal
   {

    // RGB
    template< typename type_name >
     struct pick_rgb
      {
       typedef ::color::category::rgb_error category_type;
      };

    template<> struct pick_rgb< std::uint8_t   >{ typedef ::color::category::rgb_uint8   category_type; };
    template<> struct pick_rgb< std::uint16_t  >{ typedef ::color::category::rgb_uint16  category_type; };
    template<> struct pick_rgb< std::uint32_t  >{ typedef ::color::category::rgb_uint32  category_type; };
    template<> struct pick_rgb< std::uint64_t  >{ typedef ::color::category::rgb_uint64  category_type; };
    template<> struct pick_rgb< float          >{ typedef ::color::category::rgb_float   category_type; };
    template<> struct pick_rgb< double         >{ typedef ::color::category::rgb_double  category_type; };
    template<> struct pick_rgb< long    double >{ typedef ::color::category::rgb_ldouble category_type; };

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct pick_rgb< ::color::type::pack3< first_size, second_size, third_size >  >
      {
       typedef ::color::category::rgb_pack< first_size, second_size, third_size > category_type;
      };

    //  RGBA
    template< typename type_name >
     struct pick_rgba
      {
       typedef ::color::category::rgba_error category_type;
      };

    template<> struct pick_rgba< std::uint8_t               > { typedef ::color::category::rgba_uint8     category_type; };
    template<> struct pick_rgba< std::uint16_t              > { typedef ::color::category::rgba_uint16    category_type; };
    template<> struct pick_rgba< std::uint32_t              > { typedef ::color::category::rgba_uint32    category_type; };
    template<> struct pick_rgba< std::uint64_t              > { typedef ::color::category::rgba_uint64    category_type; };
    template<> struct pick_rgba< float                      > { typedef ::color::category::rgba_float     category_type; };
    template<> struct pick_rgba< double                     > { typedef ::color::category::rgba_double    category_type; };
    template<> struct pick_rgba< long    double             > { typedef ::color::category::rgba_ldouble   category_type; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct pick_rgba< ::color::type::pack4< first_size, second_size, third_size, fourth_size >  >
      {
       typedef ::color::category::rgba_pack< first_size, second_size, third_size, fourth_size > category_type;
      };

    //  ARGB
    template< typename type_name >
     struct pick_argb
      {
       typedef ::color::category::argb_error category_type;
      };

    template<> struct pick_argb< std::uint8_t               > { typedef ::color::category::argb_uint8     category_type; };
    template<> struct pick_argb< std::uint16_t              > { typedef ::color::category::argb_uint16    category_type; };
    template<> struct pick_argb< std::uint32_t              > { typedef ::color::category::argb_uint32    category_type; };
    template<> struct pick_argb< std::uint64_t              > { typedef ::color::category::argb_uint64    category_type; };
    template<> struct pick_argb< float                      > { typedef ::color::category::argb_float     category_type; };
    template<> struct pick_argb< double                     > { typedef ::color::category::argb_double    category_type; };
    template<> struct pick_argb< long    double             > { typedef ::color::category::argb_ldouble   category_type; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct pick_argb< ::color::type::pack4< first_size, second_size, third_size, fourth_size >  >
      {
       typedef ::color::category::argb_pack< first_size, second_size, third_size, fourth_size > category_type;
      };

    //  BGR
    template< typename type_name >
     struct pick_bgr
      {
       typedef ::color::category::bgr_error category_type;
      };

    template<> struct pick_bgr< std::uint8_t   >{ typedef ::color::category::bgr_uint8   category_type; };
    template<> struct pick_bgr< std::uint16_t  >{ typedef ::color::category::bgr_uint16  category_type; };
    template<> struct pick_bgr< std::uint32_t  >{ typedef ::color::category::bgr_uint32  category_type; };
    template<> struct pick_bgr< std::uint64_t  >{ typedef ::color::category::bgr_uint64  category_type; };
    template<> struct pick_bgr< float          >{ typedef ::color::category::bgr_float   category_type; };
    template<> struct pick_bgr< double         >{ typedef ::color::category::bgr_double  category_type; };
    template<> struct pick_bgr< long    double >{ typedef ::color::category::bgr_ldouble category_type; };

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct pick_bgr< ::color::type::pack3< first_size, second_size, third_size >  >
      {
       typedef ::color::category::bgr_pack< first_size, second_size, third_size > category_type;
      };

    //  BGRA
    template< typename type_name >
     struct pick_bgra
      {
       typedef ::color::category::bgra_error category_type;
      };

    template<> struct pick_bgra< std::uint8_t               > { typedef ::color::category::bgra_uint8     category_type; };
    template<> struct pick_bgra< std::uint16_t              > { typedef ::color::category::bgra_uint16    category_type; };
    template<> struct pick_bgra< std::uint32_t              > { typedef ::color::category::bgra_uint32    category_type; };
    template<> struct pick_bgra< std::uint64_t              > { typedef ::color::category::bgra_uint64    category_type; };
    template<> struct pick_bgra< float                      > { typedef ::color::category::bgra_float     category_type; };
    template<> struct pick_bgra< double                     > { typedef ::color::category::bgra_double    category_type; };
    template<> struct pick_bgra< long    double             > { typedef ::color::category::bgra_ldouble   category_type; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct pick_bgra< ::color::type::pack4< first_size, second_size, third_size, fourth_size >  >
      {
       typedef ::color::category::bgra_pack< first_size, second_size, third_size, fourth_size > category_type;
      };

    //  ABGR
    template< typename type_name >
     struct pick_abgr
      {
       typedef ::color::category::abgr_error category_type;
      };

    template<> struct pick_abgr< std::uint8_t               > { typedef ::color::category::abgr_uint8     category_type; };
    template<> struct pick_abgr< std::uint16_t              > { typedef ::color::category::abgr_uint16    category_type; };
    template<> struct pick_abgr< std::uint32_t              > { typedef ::color::category::abgr_uint32    category_type; };
    template<> struct pick_abgr< std::uint64_t              > { typedef ::color::category::abgr_uint64    category_type; };
    template<> struct pick_abgr< float                      > { typedef ::color::category::abgr_float     category_type; };
    template<> struct pick_abgr< double                     > { typedef ::color::category::abgr_double    category_type; };
    template<> struct pick_abgr< long    double             > { typedef ::color::category::abgr_ldouble   category_type; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct pick_abgr< ::color::type::pack4< first_size, second_size, third_size, fourth_size >  >
      {
       typedef ::color::category::abgr_pack< first_size, second_size, third_size, fourth_size > category_type;
      };

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

// #include "./operation/operation.hpp"


#endif
