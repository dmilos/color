#ifndef color_cmy_category
#define color_cmy_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct cmy_bool    {};
      struct cmy_uint8   {};
      struct cmy_uint16  {};
      struct cmy_uint24  {};
      struct cmy_uint32  {};
      struct cmy_uint48  {};
      struct cmy_uint64  {};
      struct cmy_float   {};
      struct cmy_double  {};
      struct cmy_ldouble {};
     }

    template< typename tag_name >
     struct cmy
      {
       typedef void category_name;
      };

    using cmy_bool    = cmy< ::color::category::_internal::cmy_bool    >;
    using cmy_uint8   = cmy< ::color::category::_internal::cmy_uint8   >;
    using cmy_uint16  = cmy< ::color::category::_internal::cmy_uint16  >;
    using cmy_uint24  = cmy< ::color::category::_internal::cmy_uint24  >;
    using cmy_uint32  = cmy< ::color::category::_internal::cmy_uint32  >;
    using cmy_uint48  = cmy< ::color::category::_internal::cmy_uint48  >;
    using cmy_uint64  = cmy< ::color::category::_internal::cmy_uint64  >;
    using cmy_float   = cmy< ::color::category::_internal::cmy_float   >;
    using cmy_double  = cmy< ::color::category::_internal::cmy_double  >;
    using cmy_ldouble = cmy< ::color::category::_internal::cmy_ldouble >;

   }
 }

#endif
