#ifndef color_generic_operation_subtract_123
#define color_generic_operation_subtract_123

// ::color::operation::subtract( result, right )
// ::color::operation::subtract( result, left, right )


#include "../model.hpp"









 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct subtract
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;



            typedef ::color::model<category_type>  model_type;

            typedef model_type &       model_output_type;
            typedef model_type const&  model_const_input_type;

            typedef model_type  result_type;
            typedef model_type  left_type, first_argument_type;
            typedef model_type  right_type, second_argument_type;

            typedef typename index_trait_type::instance_type  index_type;

            typedef ::color::operation::_internal::subtract<category_type> this_type;

            model_type operator()( model_type const& left, model_type const& right ) const
             {
              return this_type::function( left, right );
             }

            model_type& operator()( model_output_type  result, model_const_input_type left, model_const_input_type right ) const
             {
              return this_type::procedure( result, left, right );
             }

          public:
            static model_type & accumulate( model_output_type result, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, result.get( index ) - right.get( index ) );
               }
              return result;
             }
             
            static model_type function( model_const_input_type left, model_const_input_type right )
             {
              model_type result;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, left.get( index ) - right.get( index ) );
               }
              return result;
             }

            static model_type & procedure( model_output_type result, model_const_input_type left, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, left.get( index ) - right.get( index ) );
               }
              return result;
             }
         };

      }

     template< typename category_name >
      ::color::model<category_name>      & 
      subtract
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::subtract<category_name>::accumulate( result, right );
       }

     template< typename category_name >
      ::color::model<category_name>      & 
      subtract
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::subtract<category_name>::procedure( result, left, right );
       }

    }
  }

#endif
