#ifndef color_hsv_check_unique
#define color_hsv_check_unique
// ::color::check::unique< category >( model )

#include "../../generic/check/unique.hpp"
#include "../category.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {
      namespace _privateHSV
       {

        template< typename category_name >
         struct unique
          {
           public:
            typedef category_name category_type;

            typedef ::color::_internal::model<category_type>          model_type;
            typedef ::color::trait::bound< category_type >        bound_type;

            static bool process( model_type const& m )
             {
              if( m.template get<2>() == bound_type::template maximum<2>() ) { return false; }
              if( m.template get<2>() == bound_type::template minimum<2>() ) { return false; }
              return true;
             }
          };

       }

      template<> struct unique< ::color::category::hsv_uint8   > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_uint8   >{ };
      template<> struct unique< ::color::category::hsv_uint16  > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_uint16  >{ };
      template<> struct unique< ::color::category::hsv_uint32  > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_uint32  >{ };
      template<> struct unique< ::color::category::hsv_uint64  > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_uint64  >{ };
      template<> struct unique< ::color::category::hsv_float   > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_float   >{ };
      template<> struct unique< ::color::category::hsv_double  > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_double  >{ };
      template<> struct unique< ::color::category::hsv_ldouble > : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv_ldouble >{ };

     }
   }
 }

#endif
