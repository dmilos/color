#ifndef color_YDbDr_category
#define color_YDbDr_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {

      template< typename tag_name >
       struct YDbDr__type
        {
         typedef tag_name tag_type;
        };

      using YDbDr_void    = color::category::_internal::YDbDr__type< void >;
      using YDbDr_bool    = color::category::_internal::YDbDr__type< bool >;
      using YDbDr_uint8   = color::category::_internal::YDbDr__type< std::uint8_t >;
      using YDbDr_uint16  = color::category::_internal::YDbDr__type< std::uint16_t >;
    //using YDbDr_uint24  = color::category::_internal::YDbDr__type< std::uint24_t >;
      using YDbDr_uint32  = color::category::_internal::YDbDr__type< std::uint32_t >;
    //using YDbDr_uint48  = color::category::_internal::YDbDr__type< std::uint48_t >;
      using YDbDr_uint64  = color::category::_internal::YDbDr__type< std::uint64_t >;
      using YDbDr_float   = color::category::_internal::YDbDr__type< float >;
      using YDbDr_double  = color::category::_internal::YDbDr__type< double >;
      using YDbDr_ldouble = color::category::_internal::YDbDr__type< long double >;

     }

    template< typename tag_name >
     struct YDbDr
      {
       typedef void category_name;
      };

    using YDbDr_void    = ::color::category::YDbDr< ::color::category::_internal::YDbDr_void    >;
    using YDbDr_bool    = ::color::category::YDbDr< ::color::category::_internal::YDbDr_bool    >;
    using YDbDr_uint8   = ::color::category::YDbDr< ::color::category::_internal::YDbDr_uint8   >;
    using YDbDr_uint16  = ::color::category::YDbDr< ::color::category::_internal::YDbDr_uint16  >;
  //using YDbDr_uint24  = ::color::category::YDbDr< ::color::category::_internal::YDbDr_uint24  >;
    using YDbDr_uint32  = ::color::category::YDbDr< ::color::category::_internal::YDbDr_uint32  >;
  //using YDbDr_uint48  = ::color::category::YDbDr< ::color::category::_internal::YDbDr_uint48  >;
    using YDbDr_uint64  = ::color::category::YDbDr< ::color::category::_internal::YDbDr_uint64  >;
    using YDbDr_float   = ::color::category::YDbDr< ::color::category::_internal::YDbDr_float   >;
    using YDbDr_double  = ::color::category::YDbDr< ::color::category::_internal::YDbDr_double  >;
    using YDbDr_ldouble = ::color::category::YDbDr< ::color::category::_internal::YDbDr_ldouble >;

   }
 }

#endif
