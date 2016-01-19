#ifndef color_hsl_check_unique
#define color_hsl_check_unique
// ::color::check::unique< category >( model )

#include "../../generic/check/unique.hpp"
#include "../category.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {

      template<>
       struct unique< ::color::category::hsl_float>
        {
         public:
          typedef ::color::category::hsl_float category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          static bool process( model_type const& m )
           {
            if( m.template get<1>() == bound_type::template minimum<1>() ) { return false; }
            if( m.template get<2>() == bound_type::template minimum<2>() ) { return false; }
            if( m.template get<2>() == bound_type::template maximum<2>() ) { return false; }
            return true;
           }
        };

      template<>
       struct unique< ::color::category::hsl_double >
        {
         public:
          typedef ::color::category::hsl_double category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          static bool process( model_type const& m )
           {
            if( m.template get<1>() == bound_type::template minimum<1>() ) { return false; }
            if( m.template get<2>() == bound_type::template minimum<2>() ) { return false; }
            if( m.template get<2>() == bound_type::template maximum<2>() ) { return false; }
            return true;
           }
        };

      template<>
       struct unique< ::color::category::hsl_ldouble >
        {
         public:
          typedef ::color::category::hsl_ldouble category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          static bool process( model_type const& m )
           {
            if( m.template get<1>() == bound_type::template minimum<1>() ) { return false; }
            if( m.template get<2>() == bound_type::template minimum<2>() ) { return false; }
            if( m.template get<2>() == bound_type::template maximum<2>() ) { return false; }
            return true;
           }
        };

     }
   }
 }

#endif
