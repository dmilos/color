#ifndef color_YCgCo_category
#define color_YCgCo_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {

      template< typename tag_name >
       struct YCgCo__type
        {
         typedef tag_name tag_type;
        };

      using YCgCo_void    = color::category::_internal::YCgCo__type< void >;
      using YCgCo_bool    = color::category::_internal::YCgCo__type< bool >;
      using YCgCo_uint8   = color::category::_internal::YCgCo__type< std::uint8_t >;
      using YCgCo_uint16  = color::category::_internal::YCgCo__type< std::uint16_t >;
    //using YCgCo_uint24  = color::category::_internal::YCgCo__type< std::uint24_t >;
      using YCgCo_uint32  = color::category::_internal::YCgCo__type< std::uint32_t >;
    //using YCgCo_uint48  = color::category::_internal::YCgCo__type< std::uint48_t >;
      using YCgCo_uint64  = color::category::_internal::YCgCo__type< std::uint64_t >;
      using YCgCo_float   = color::category::_internal::YCgCo__type< float >;
      using YCgCo_double  = color::category::_internal::YCgCo__type< double >;
      using YCgCo_ldouble = color::category::_internal::YCgCo__type< long double >;

     }

    template< typename tag_name >
     struct YCgCo
      {
       typedef void category_name;
      };

    using YCgCo_void    = ::color::category::YCgCo< ::color::category::_internal::YCgCo_void    >;
    using YCgCo_bool    = ::color::category::YCgCo< ::color::category::_internal::YCgCo_bool    >;
    using YCgCo_uint8   = ::color::category::YCgCo< ::color::category::_internal::YCgCo_uint8   >;
    using YCgCo_uint16  = ::color::category::YCgCo< ::color::category::_internal::YCgCo_uint16  >;
  //using YCgCo_uint24  = ::color::category::YCgCo< ::color::category::_internal::YCgCo_uint24  >;
    using YCgCo_uint32  = ::color::category::YCgCo< ::color::category::_internal::YCgCo_uint32  >;
  //using YCgCo_uint48  = ::color::category::YCgCo< ::color::category::_internal::YCgCo_uint48  >;
    using YCgCo_uint64  = ::color::category::YCgCo< ::color::category::_internal::YCgCo_uint64  >;
    using YCgCo_float   = ::color::category::YCgCo< ::color::category::_internal::YCgCo_float   >;
    using YCgCo_double  = ::color::category::YCgCo< ::color::category::_internal::YCgCo_double  >;
    using YCgCo_ldouble = ::color::category::YCgCo< ::color::category::_internal::YCgCo_ldouble >;

   }
 }

#endif
