#ifndef  color_generic_operation_clamp_123
#define  color_generic_operation_clamp_123


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct clamp
         {
          public:
            typedef category_name  category_type;


            typedef ::color::_internal::trait< category_type >   trait_type;

            typedef typename ::color::_internal::model<category_type>  model_type;

            typedef typename trait_type::component_type component_type;
            typedef typename trait_type::index_type  index_type;

            static void accumulate( model_type &result )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                if( result.get() <  trait_type::minimum( index ) )
                 {
                  result.set( index, trait_type::minimum( index ) );
                  continue;
                 }
                if(  trait_type::maximum( index ) < result.get())
                 {
                  result.set( index, trait_type::maximum( index ) );
                  continue;
                 }
               }
             }

            static void full(  model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                if( right.get() <  trait_type::minimum( index ) )
                 {
                  result.set( index, trait_type::minimum( index ) );
                  continue;
                 }
                if(  trait_type::maximum( index ) < right.get() )
                 {
                  result.set( index, trait_type::maximum( index ) );
                  continue;
                 }
                result.set( index, right.get() );
               }
             }

         };
      }

     namespace clamp
      {

       template< typename category_name >
        void accumulate
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          color::operation::_internal::clamp<category_name>::accumulate( result, right );
         }

       template< typename category_name >
        void full
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& left
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::_internal::clamp<category_name>::full( result, left, right );
         }

      }
    }
  }

#endif
