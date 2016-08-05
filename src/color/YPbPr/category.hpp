#ifndef color_YPbPr_category
#define color_YPbPr_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {

      template< typename tag_name >
       struct YPbPr__type
        {
         typedef tag_name tag_type;
        };

      using YPbPr_void    = color::category::_internal::YPbPr__type< void >;
      using YPbPr_bool    = color::category::_internal::YPbPr__type< bool >;
      using YPbPr_uint8   = color::category::_internal::YPbPr__type< std::uint8_t >;
      using YPbPr_uint16  = color::category::_internal::YPbPr__type< std::uint16_t >;
    //using YPbPr_uint24  = color::category::_internal::YPbPr__type< std::uint24_t >;
      using YPbPr_uint32  = color::category::_internal::YPbPr__type< std::uint32_t >;
    //using YPbPr_uint48  = color::category::_internal::YPbPr__type< std::uint48_t >;
      using YPbPr_uint64  = color::category::_internal::YPbPr__type< std::uint64_t >;
      using YPbPr_float   = color::category::_internal::YPbPr__type< float >;
      using YPbPr_double  = color::category::_internal::YPbPr__type< double >;
      using YPbPr_ldouble = color::category::_internal::YPbPr__type< long double >;

     }

    template< typename tag_name >
     struct YPbPr
      {
       typedef void category_name;
      };

    using YPbPr_void    = ::color::category::YPbPr< ::color::category::_internal::YPbPr_void    >;
    using YPbPr_bool    = ::color::category::YPbPr< ::color::category::_internal::YPbPr_bool    >;
    using YPbPr_uint8   = ::color::category::YPbPr< ::color::category::_internal::YPbPr_uint8   >;
    using YPbPr_uint16  = ::color::category::YPbPr< ::color::category::_internal::YPbPr_uint16  >;
  //using YPbPr_uint24  = ::color::category::YPbPr< ::color::category::_internal::YPbPr_uint24  >;
    using YPbPr_uint32  = ::color::category::YPbPr< ::color::category::_internal::YPbPr_uint32  >;
  //using YPbPr_uint48  = ::color::category::YPbPr< ::color::category::_internal::YPbPr_uint48  >;
    using YPbPr_uint64  = ::color::category::YPbPr< ::color::category::_internal::YPbPr_uint64  >;
    using YPbPr_float   = ::color::category::YPbPr< ::color::category::_internal::YPbPr_float   >;
    using YPbPr_double  = ::color::category::YPbPr< ::color::category::_internal::YPbPr_double  >;
    using YPbPr_ldouble = ::color::category::YPbPr< ::color::category::_internal::YPbPr_ldouble >;

   }
 }

#endif
