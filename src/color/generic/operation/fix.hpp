#ifndef color_generic_operation_fix
#define color_generic_operation_fix

// color::operation::fix< category >( )

#include "../../_internal/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct fix
         {
          public:
           typedef category_name category_type;

           typedef ::color::_internal::model<category_type>          model_type;
           typedef ::color::_internal::bound<category_type>          bound_type;
           typedef ::color::_internal::container< category_name >    container_trait_type;
           typedef ::color::_internal::component< category_name >    component_trait_type;

           typedef ::color::_internal::index<category_type>  index_trait_type;
           typedef typename index_trait_type::instance_type  index_type;

           static void process( model_type & result )
            {
             // TODO. Models specific
             return;
            }

           static void process( model_type & result, model_type const& right )
            {
             // TODO. Models specific
             return;
            }
         };

      }

       template< typename category_name >
        void fix
         (
           ::color::_internal::model<category_name>      & result
         )
         {
          ::color::operation::_internal::fix<category_name>::process( result );
         }

       template< typename category_name >
        void fix
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::_internal::fix<category_name>::process( result, right );
         }

    }
  }

#endif
