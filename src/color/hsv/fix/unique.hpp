#ifndef  color_hsl_fix_unique
#define  color_hsl_fix_unique
// ::color::check::unique< category >( model )

#include "../category.hpp"
#include "../trait/bound.hpp"
#include "../../generic/fix/unique.hpp"


namespace color
 {
  namespace fix
   {
    namespace _internal
     {

      template< typename tag_name >
       struct unique< ::color::category::hsv< tag_name > >
        {
         public:
           typedef ::color::category::hsv< tag_name >  category_type;

           typedef typename ::color::_internal::model<category_type>  model_type;
           typedef typename ::color::trait::bound<category_type>      bound_type;

           static void process( model_type &result )
            {
             if( result.template get<2>() == bound_type::template minimum<2>() )
              {
               result.template set<0>( bound_type::template minimum<0>() );
               result.template set<1>( bound_type::template minimum<1>() );
               return;
              }
             if( result.template get<1>() == bound_type::template minimum<1>() )
              {
               result.template set<0>( bound_type::template minimum<0>() );
               return;
              }
            }

           static void process(  model_type &result, model_type const& right )
            {
             if( result.template get<2>() == bound_type::template minimum<2>() )
              {
               result.template set<0>( bound_type::template minimum<0>() );
               result.template set<1>( bound_type::template minimum<1>() );
               return;
              }
             if( result.template get<1>() == bound_type::template minimum<1>() )
              {
               result.template set<0>( bound_type::template minimum<0>() );
               return;
              }
             result = right;
             return;
            }

          };


     }
   }
 }

#endif
