#ifndef  color_generic_operation_convex_123
#define color_generic_operation_convex_123


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {
       template< typename category_name, typename scalar_name >
        struct convex
         {
          public:
            typedef category_name  category_type;
            typedef scalar_name    scalar_type;
            typedef scalar_type  const&  scalar_const_input_type;

            typedef color::_internal::trait< category_type >   trait_type;

            typedef typename color::_internal::model<category_type>  model_type;
            typedef model_type &  model_input_type;
            typedef model_type const&  model_const_input_type;

            typedef typename trait_type::component_type component_type;
            typedef typename trait_type::index_type  index_type;

            static void accumulate( model_input_type result, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, scalar * result.get( index ) +( scalar_type( 1 ) - scalar ) *right.get( index )  );
               }
             }

            static void full(  model_input_type  result, model_const_input_type left, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, scalar * left.get( index ) +(scalar_type( 1 ) - scalar ) *right.get( index )  );
               }
             }

         };
      }

     namespace convex
      {

       template< typename category_name, typename scalar_name >
        void accumulate
         (
           color::_internal::model<category_name>      & result
          ,scalar_name                            const& scalar
          ,color::_internal::model<category_name> const& right
         )
         {
          color::operation::_internal::convex<category_name,scalar_name>::accumulate( result, scalar, right );
         }

       template< typename category_name, typename scalar_name >
        void full
         (
           color::_internal::model<category_name>      & result
          ,color::_internal::model<category_name> const& left
          ,scalar_name                            const& scalar
          ,color::_internal::model<category_name> const& right
         )
         {
          color::operation::_internal::convex<category_name,scalar_name>::full( result, left, scalar, right );
         }

      }

    }
  }

#endif
