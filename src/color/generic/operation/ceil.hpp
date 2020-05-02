#ifndef color_generic_operation_ceil_123
#define color_generic_operation_ceil_123

// ::color::operation::ceil( result, right )
// ::color::operation::ceil( result, left, right )


#include "../model.hpp"









 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct ceil
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;



            typedef ::color::model<category_type>  model_type;
            typedef model_type &                   model_output_type;
            typedef model_type const&              model_const_input_type;

            typedef model_type  result_type;
            typedef model_type  left_type, first_argument_type;
            typedef model_type  right_type, second_argument_type;

            typedef typename index_trait_type::instance_type  index_type;

            typedef ::color::operation::_internal::ceil<category_type> this_type;
            
          public:
            model_type & operator()( model_type &result, model_type const& upper_bound ) const
             {
              return this_type::procedure( result, upper_bound );
             }
            model_type & operator()(  model_type &result, model_type const& left, model_type const& upper_bound ) const
             {
              return this_type::procedure( result, left, upper_bound );
             }

          public:
            static model_type & accumulate( model_output_type result, model_const_input_type upper_bound )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( upper_bound.get(index) < result.get(index) )
                 {
                  result.set( index, upper_bound.get( index )  );
                 }
               }
              return result;
             }
             
            static model_type function( model_const_input_type left, model_const_input_type upper_bound )
             {
              model_type result;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( upper_bound.get(index) < result.get(index) )
                 {
                  result.set( index, upper_bound.get( index )  );
                 }
                else
                 {
                  result.set( index, left.get( index ) );
                 }
               }
              return result;
             }

            static model_type & procedure(    model_output_type result, model_const_input_type left, model_const_input_type upper_bound )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( upper_bound.get(index) < result.get(index) )
                 {
                  result.set( index, upper_bound.get( index )  );
                 }
                else
                 {
                  result.set( index, left.get( index ) );
                 }
               }
              return result;
             }
         };

      }

     template< typename category_name >
      ::color::model<category_name>      &
      ceil
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& upper_bound
       )
       {
        return ::color::operation::_internal::ceil<category_name>::accumulate( result, upper_bound );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      ceil
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,::color::model<category_name> const& upper_bound
       )
       {
        return ::color::operation::_internal::ceil<category_name>::procedure( result, left, upper_bound );
       }

    }
  }

#endif
