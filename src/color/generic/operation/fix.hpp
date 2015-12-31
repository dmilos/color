#ifndef color_generic_operation_fix
#define color_generic_operation_fix

// color::operation::fix::range< category >( )
// color::operation::fix::integrity< category >( )

#include "../../_internal/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace correct
      {

       template< typename category_name >
        struct range
         {
          public:
           typedef category_name category_type;

           typedef ::color::_internal::model<category_type>          model_type;
           typedef ::color::_internal::bound<category_type>          bound_type;
           typedef ::color::_internal::container< category_name >    container_trait_type;
           typedef ::color::_internal::component< category_name >    component_trait_type;
           typedef ::color::_internal::index<category_type>          index_trait_type;

           typedef typename index_trait_type::instance_type  index_type;

           static void process( model_type & result, model_type const& right )
            {
             for( index_type index = 0; index < container_trait_type::size(); index ++ )
              {
               if (right.get(index) <  bound_type::minimum(index))
                {
                 result.set( index, bound_type::minimum( index ) );
                 continue;
                }
               if(  bound_type::maximum( index ) < right.get(index) )
                {
                 result.set( index, bound_type::maximum( index ) );
                 continue;
                }
               result.set( index, right.get(index) );
              }
            }

           static void process( model_type & result )
            {
             for( index_type index = 0; index < container_trait_type::size(); index ++ )
              {
               if( result.get( index ) <  bound_type::minimum( index ) )
                {
                 result.set( index, bound_type::minimum( index ) );
                 continue;
                }
               if(  bound_type::maximum( index ) < result.get(index) )
                {
                 result.set( index, bound_type::maximum( index ) );
                 continue;
                }
              }
            }
         };

       template< typename category_name >
        struct integrity
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

     namespace fix
      {
       template< typename category_name >
        void range
         (
           ::color::_internal::model<category_name>      & result
         )
         {
          ::color::operation::correct::range<category_name>::process( result );
         }

       template< typename category_name >
        void range
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::correct::range<category_name>::process( result, right );
         }

       template< typename category_name >
        void integrity
         (
           ::color::_internal::model<category_name>      & result
         )
         {
          ::color::operation::correct::integrity<category_name>::process( result );
         }

       template< typename category_name >
        void integrity
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::correct::integrity<category_name>::process( result, right );
         }

      }
    }
  }

#endif
