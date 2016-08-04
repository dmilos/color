#ifndef color_hsv_check_integrity
#define color_hsv_check_integrity

// ::color::check::integrity< category >( model )

#include "../../generic/check/integrity.hpp"
#include "../category.hpp"
#include "../place/hue.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {

      template<>
       struct integrity< ::color::category::hsv_float>
        {
         public:
          typedef ::color::category::hsv_float category_type;

          typedef ::color::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          enum
           {
             hue_p        = ::color::place::_internal::hue<category_type>::position_enum
           };

          static bool process( model_type const& m )
           {
            if( m.template get<hue_p>() < bound_type::template minimum<hue_p>() ) { return false; }
            if( bound_type::template maximum<hue_p>() < m.template get<hue_p>() ) { return false; }
            return true;
           }
        };

      template<>
       struct integrity< ::color::category::hsv_double >
        {
         public:
          typedef ::color::category::hsv_double category_type;

          typedef ::color::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          enum
           {
             hue_p        = ::color::place::_internal::hue<category_type>::position_enum
           };

          static bool process( model_type const& m )
           {
            if( m.template get<hue_p>() < bound_type::template minimum<hue_p>() ) { return false; }
            if( bound_type::template maximum<hue_p>() < m.template get<hue_p>() ) { return false; }
            return true;
           }
        };

      template<>
       struct integrity< ::color::category::hsv_ldouble >
        {
         public:
          typedef ::color::category::hsv_ldouble category_type;

          typedef ::color::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          enum
           {
             hue_p        = ::color::place::_internal::hue<category_type>::position_enum
           };

          static bool process( model_type const& m )
           {
            if( m.template get<hue_p>() < bound_type::template minimum<hue_p>() ) { return false; }
            if( bound_type::template maximum<hue_p>() < m.template get<hue_p>() ) { return false; }
            return true;
           }
        };

     }
   }
 }

#endif
