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
              if( m.template get<1>() == bound_type::template minimum<1>() ) { return false; }
              if( m.template get<2>() == bound_type::template minimum<2>() ) { return false; }
              if( m.template get<2>() == bound_type::template maximum<2>() ) { return false; }
              return true;
             }
          };

       }

      template< typename hsv_tag_name > 
       struct unique< ::color::category::hsv< hsv_tag_name > >
         : public ::color::check::_internal::_privateHSV::unique< ::color::category::hsv< hsv_tag_name >  >
         {
         };

     }
   }
 }

#endif
