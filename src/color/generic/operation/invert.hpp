#ifndef  color_generic_operation_invert_123
#define color_generic_operation_invert_123

// ::color::operation::_internal::invert<category_name>::component<>( )
// ::color::operation::_internal::invert<category_name>::process( )
// ::color::operation::_internal::invert<category_name>::process( )

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
            typedef typename trait_type::component_input_const_type component_input_const_type;

            typedef typename trait_type::index_type              index_type;
            typedef typename trait_type::index_input_const_type  index_input_const_type;

            typedef typename trait_type::component_return_type  component_return_type;

            static component_return_type
            component
             (
               component_input_const_type component
              ,index_input_const_type     index
             )
             {
                return trait_type::range(index) - component;
             }

            template< index_type index_size >
             static
             component_return_type
             component( component_input_const_type component )
             {
              return trait_type::template range<index_size>() - component;
             }

            static void process( model_type &result )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, component( result.get( index ), index ) );
               }
             }

            static void process(  model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, component( right.get( index ), index ) );
               }
             }

         };
      }


     template< typename category_name >
      void invert
       (
         color::_internal::model<category_name>      & result
       )
       {
        color::operation::_internal::invert<category_name>::process( result );
       }

     template< typename category_name >
      void invert
       (
         color::_internal::model<category_name>      & result
        ,color::_internal::model<category_name> const& right
       )
       {
        color::operation::_internal::invert<category_name>::process( result, right );
       }


    }
  }

#endif
