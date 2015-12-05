#ifndef  color_generic_operation_invert_123
#define color_generic_operation_invert_123


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {
       template< typename category_name>
        struct invert
         {
          public:
            typedef category_name  category_type;


            typedef color::_internal::trait< category_type >   trait_type;

            typedef typename color::_internal::model<category_type>  model_type;

            typedef typename trait_type::component_type component_type;
            typedef typename trait_type::index_type  index_type;

            static void accumulate( model_type &result )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                  result.set( index, ( trait_type::maximum( index ) -  result.get( index ) ) + trait_type::minimum( index ) );
               }
             }

            static void full(  model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, ( trait_type::maximum( index ) -  result.get( index) ) + trait_type::minimum( index ) );
               }
             }

         };
      }

     namespace invert
      {

       template< typename category_name >
        void accumulate
         (
           color::_internal::model<category_name>      & result
         )
         {
          color::operation::_internal::invert<category_name>::accumulate( result );
         }

       template< typename category_name >
        void full
         (
           color::_internal::model<category_name>      & result
          ,color::_internal::model<category_name> const& right
         )
         {
          color::operation::_internal::invert<category_name>::full( result, right );
         }

      }

    }
  }

#endif
