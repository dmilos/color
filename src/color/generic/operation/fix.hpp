#ifndef color_generic_operation_fix
#define color_generic_operation_fix
// color::_internal::fix< category >

#include "../../_internal/model.hpp"

 namespace color
  {
   namespace operation
    {

     template< typename category_name >
      struct correct
       {
        public:
         typedef category_name category_type;

         typedef ::color::_internal::model<category_type>          model_type;
         typedef ::color::_internal::bound<category_type>          bound_type;
         typedef ::color::_internal::container< category_name >    container_trait_type;
         typedef ::color::_internal::component< category_name >    component_trait_type;

         typedef ::color::_internal::index<category_type>  index_trait_type;
         typedef typename index_trait_type::instance_type  index_type;

         typedef ::color::operation::correct<category_type>   this_type;

         static void range( model_type & result, model_type const& right )
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

         static void range( model_type & result )
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

         static void integrity( model_type & result )
          {
           // TODO. Models specific
           return;
          }

         static void integrity( model_type & result, model_type const& right )
          {
           // TODO. Models specific
           return;
          }
       };

     namespace fix
      {

       template< typename category_name >
        void range
         (
           ::color::_internal::model<category_name>      & result
         )
         {
          color::operation::correct<category_name>::range( result );
         }

       template< typename category_name >
        void range
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::correct<category_name>::range( result, right );
         }

       template< typename category_name >
        void integrity
         (
           ::color::_internal::model<category_name>      & result
         )
         {
          color::operation::correct<category_name>::integrity( result );
         }

       template< typename category_name >
        void integrity
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::correct<category_name>::integrity( result, right );
         }

      }
    }
  }

#endif
