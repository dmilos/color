#ifndef color_generic_operation_clip_123
#define color_generic_operation_clip_123

// ::color::operation::clip( result, right )
// ::color::operation::clip( result, left, right )


#include "../model.hpp"









 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct clip
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;

            typedef ::color::model<category_type>  model_type;

            typedef typename index_trait_type::instance_type  index_type;

            typedef ::color::operation::_internal::clip<category_type> this_type;


          public:
            model_type & operator()( model_type &result, model_type const& low_bound, model_type const& upper_bound ) const
             {
              return this_type::process( result, low_bound, upper_bound );
             }
            model_type & operator()(  model_type &result, model_type const& left, model_type const& low_bound, model_type const& upper_bound ) const
             {
              return this_type::process( result, left, low_bound, upper_bound );
             }

          public:
            static model_type & accumulate( model_type &result, model_type const& low_bound, model_type const& upper_bound )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( result.get(index) < low_bound.get(index) )
                 {
                  result.set( index, low_bound.get( index )  );
                  continue;
                 }
                if( upper_bound.get(index) < result.get(index) )
                 {
                  result.set( index, upper_bound.get( index )  );
                  continue;
                 }
               }
              return result;
             }

            static model_type & process(  model_type &result, model_type const& left, model_type const& low_bound, model_type const& upper_bound )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( left.get(index) < low_bound.get(index) )
                 {
                  result.set( index, low_bound.get( index )  );
                  continue;
                 }
                if( upper_bound.get(index) < left.get(index) )
                 {
                  result.set( index, upper_bound.get( index )  );
                  continue;
                 }
                result.set( index, left.get( index )  );
               }
              return result;
             }
         };

      }

     template< typename category_name >
      ::color::model<category_name>      &
      clip
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& low_bound,  ::color::model<category_name> const& upper_bound
       )
       {
        return ::color::operation::_internal::clip<category_name>::accumulate( result, low_bound, upper_bound );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      clip
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,::color::model<category_name> const& low_bound,  ::color::model<category_name> const& upper_bound
       )
       {
        return ::color::operation::_internal::clip<category_name>::process( result, left, low_bound, upper_bound );
       }

    }
  }

#endif
