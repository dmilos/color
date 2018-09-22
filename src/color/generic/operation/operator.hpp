#ifndef  color_generic_operation_operator_123
#define color_generic_operation_operator_123
// using namespace  ::color::operation::arithmetic
// using namespace  ::color::operation::compare


#include "./addition.hpp"
#include "./scale.hpp"
#include "./subtract.hpp"

 namespace color
  {
   namespace operation
    {
     namespace arithmetic
      {

       template< typename category_name >
        inline
        ::color::model< category_name >
        operator +( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          ::color::model< category_name > result;
          ::color::operation::addition( result, left, right );
          return result;
         }

       template< typename category_name>
        inline
        ::color::model< category_name > &
        operator +=( ::color::model< category_name > & result, ::color::model< category_name > const&  right )
         {
          ::color::operation::addition( result, right );
          return result;
         }

       template< typename category_name >
        inline
        ::color::model< category_name >
        operator -( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          ::color::model< category_name > result;
          ::color::operation::subtract( result,  left, right );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
        ::color::model< category_name >
        operator *
         (
           scalar_name                                const& left
          ,::color::model< category_name > const& right
         )
         {
          ::color::model< category_name > result;
          ::color::operation::scale( result,  left, right );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
        ::color::model< category_name >
        operator *
         (
           ::color::model< category_name > const & left
          ,scalar_name                                const & right
         )
         {
          ::color::model< category_name > result;
          ::color::operation::scale( result, right, left );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
        ::color::model< category_name >
        operator /
         (
           ::color::model< category_name > const & left
          ,scalar_name                     const & right
         )
         {
          typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
          ::color::model< category_name > result;
          ::color::operation::scale( result,  scalar_type(1) / scalar_type(right), left );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
        ::color::model< category_name > &
        operator -=( ::color::model< category_name > & result, scalar_name const&  left )
         {
          ::color::operation::subtract( result, left );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
       ::color::model< category_name > &
        operator *=( ::color::model< category_name > & result, scalar_name const&  scalar )
         {
          ::color::operation::scale( result, scalar );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
       ::color::model< category_name > &
        operator /=( ::color::model< category_name > & result, scalar_name const&  scalar )
         {
          typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
          ::color::operation::scale( result, scalar_type(1) / scalar_type( scalar ) );
          return result;
         }

      }

    }
  }

#endif
