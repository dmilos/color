#ifndef color_YCbCr_category
#define color_YCbCr_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {

      template< typename tag_name >
       struct YCbCr__type
        {
         typedef tag_name tag_type;
        };

      using YCbCr_void    = color::category::_internal::YCbCr__type< void >;
      using YCbCr_bool    = color::category::_internal::YCbCr__type< bool >;
      using YCbCr_uint8   = color::category::_internal::YCbCr__type< std::uint8_t >;
      using YCbCr_uint16  = color::category::_internal::YCbCr__type< std::uint16_t >;
    //using YCbCr_uint24  = color::category::_internal::YCbCr__type< std::uint24_t >;
      using YCbCr_uint32  = color::category::_internal::YCbCr__type< std::uint32_t >;
    //using YCbCr_uint48  = color::category::_internal::YCbCr__type< std::uint48_t >;
      using YCbCr_uint64  = color::category::_internal::YCbCr__type< std::uint64_t >;
      using YCbCr_float   = color::category::_internal::YCbCr__type< float >;
      using YCbCr_double  = color::category::_internal::YCbCr__type< double >;
      using YCbCr_ldouble = color::category::_internal::YCbCr__type< long double >;

     }

    template< typename tag_name >
     struct YCbCr
      {
       typedef void category_name;
      };

    using YCbCr_void    = ::color::category::YCbCr< ::color::category::_internal::YCbCr_void    >;
    using YCbCr_bool    = ::color::category::YCbCr< ::color::category::_internal::YCbCr_bool    >;
    using YCbCr_uint8   = ::color::category::YCbCr< ::color::category::_internal::YCbCr_uint8   >;
    using YCbCr_uint16  = ::color::category::YCbCr< ::color::category::_internal::YCbCr_uint16  >;
  //using YCbCr_uint24  = ::color::category::YCbCr< ::color::category::_internal::YCbCr_uint24  >;
    using YCbCr_uint32  = ::color::category::YCbCr< ::color::category::_internal::YCbCr_uint32  >;
  //using YCbCr_uint48  = ::color::category::YCbCr< ::color::category::_internal::YCbCr_uint48  >;
    using YCbCr_uint64  = ::color::category::YCbCr< ::color::category::_internal::YCbCr_uint64  >;
    using YCbCr_float   = ::color::category::YCbCr< ::color::category::_internal::YCbCr_float   >;
    using YCbCr_double  = ::color::category::YCbCr< ::color::category::_internal::YCbCr_double  >;
    using YCbCr_ldouble = ::color::category::YCbCr< ::color::category::_internal::YCbCr_ldouble >;

   }
 }

#endif
