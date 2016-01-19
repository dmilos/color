#ifndef color_cmyk_check_unique
#define color_cmyk_check_unique
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
       struct unique< ::color::category::cmyk_float>
        {
         public:
          typedef ::color::category::cmyk_float category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          static bool process( model_type const& m )
           {
            if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }
            return true;
           }
        };

      template<>
       struct unique< ::color::category::cmyk_double >
        {
         public:
          typedef ::color::category::cmyk_double category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          static bool process( model_type const& m )
           {
            if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }
            return true;
           }
        };

      template<>
       struct unique< ::color::category::cmyk_ldouble >
        {
         public:
          typedef ::color::category::cmyk_ldouble category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::trait::bound< category_type >        bound_type;

          static bool process( model_type const& m )
           {
            if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }
            return true;
           }
        };

     }
   }
 }

#endif
