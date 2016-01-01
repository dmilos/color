#ifndef color_generic_operation_integrity
#define color_generic_operation_integrity
// color::operation::integrity< category >( model )

#include "../../_internal/model.hpp"

namespace color
 {
  namespace operation
   {
    namespace _internal
     {

      template< typename category_name >
       struct integrity
        {
         public:
          typedef category_name category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::_internal::bound<category_type>          bound_type;
          typedef ::color::_internal::container< category_name >    container_trait_type;
          typedef ::color::_internal::component< category_name >    component_trait_type;
          typedef ::color::_internal::index<category_type>          index_trait_type;

          typedef typename index_trait_type::instance_type          index_type;

          typedef ::color::operation::_internal::integrity<category_type>   this_type;

          static bool process( model_type const& m )
           {
            // TODO. Model specific
            return true;
           }

        };
     }

    template< typename category_name >
     inline
     bool integrity( ::color::_internal::model<category_name> const& m )
      {
       return  ::color::operation::_internal::integrity<category_name>::process( m );
      }

   }
 }

#endif
