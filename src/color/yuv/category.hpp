#ifndef color_yuv_category
#define color_yuv_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {

      template< typename tag_name >
       struct yuv__type
        {
         typedef tag_name tag_type;
        };

      using yuv_void    = color::category::_internal::yuv__type< void >;
      using yuv_bool    = color::category::_internal::yuv__type< bool >;
      using yuv_uint8   = color::category::_internal::yuv__type< std::uint8_t >;
      using yuv_uint16  = color::category::_internal::yuv__type< std::uint16_t >;
    //using yuv_uint24  = color::category::_internal::yuv__type< std::uint24_t >;
      using yuv_uint32  = color::category::_internal::yuv__type< std::uint32_t >;
    //using yuv_uint48  = color::category::_internal::yuv__type< std::uint48_t >;
      using yuv_uint64  = color::category::_internal::yuv__type< std::uint64_t >;
      using yuv_float   = color::category::_internal::yuv__type< float >;
      using yuv_double  = color::category::_internal::yuv__type< double >;
      using yuv_ldouble = color::category::_internal::yuv__type< long double >;

     }

    template< typename tag_name >
     struct yuv
      {
       typedef void category_name;
      };

    using yuv_void    = ::color::category::yuv< ::color::category::_internal::yuv_void    >;
    using yuv_bool    = ::color::category::yuv< ::color::category::_internal::yuv_bool    >;
    using yuv_uint8   = ::color::category::yuv< ::color::category::_internal::yuv_uint8   >;
    using yuv_uint16  = ::color::category::yuv< ::color::category::_internal::yuv_uint16  >;
  //using yuv_uint24  = ::color::category::yuv< ::color::category::_internal::yuv_uint24  >;
    using yuv_uint32  = ::color::category::yuv< ::color::category::_internal::yuv_uint32  >;
  //using yuv_uint48  = ::color::category::yuv< ::color::category::_internal::yuv_uint48  >;
    using yuv_uint64  = ::color::category::yuv< ::color::category::_internal::yuv_uint64  >;
    using yuv_float   = ::color::category::yuv< ::color::category::_internal::yuv_float   >;
    using yuv_double  = ::color::category::yuv< ::color::category::_internal::yuv_double  >;
    using yuv_ldouble = ::color::category::yuv< ::color::category::_internal::yuv_ldouble >;

   }
 }

#endif
