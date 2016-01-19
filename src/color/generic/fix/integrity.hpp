#ifndef color_generic_fix_integrity
#define color_generic_fix_integrity
// ::color::fix::integrity< category >( model )

#include "../../_internal/model.hpp"

namespace color
 {
  namespace fix
   {
    namespace _internal
     {

      template< typename category_name >
       struct integrity
        {
         public:
          typedef category_name category_type;

          typedef ::color::_internal::model<category_type>          model_type;

          static void process( model_type & m )
           {
            //Model specific.
           }

          static void process( model_type & result, model_type const& right )
           {
            //Model specific.
           }
        };
     }


    template< typename category_name >
     void integrity
      (
       ::color::_internal::model<category_name>      & result
      )
      {
       ::color::fix::_internal::integrity<category_name>::process( result );
      }

    template< typename category_name >
     void integrity
      (
       ::color::_internal::model<category_name>      & result
      ,::color::_internal::model<category_name> const& right
      )
      {
       ::color::fix::_internal::integrity<category_name>::process( result, right );
      }

   }
 }

#endif
