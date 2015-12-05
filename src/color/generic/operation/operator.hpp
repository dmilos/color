#ifndef  color_generic_operation_operator_123
#define color_generic_operation_operator_123
// using namespace  color::operation::arithmetic


#include "addition.hpp"
#include "divide.hpp"
#include "multiply.hpp"
#include "scale.hpp"
#include "subtract.hpp"


 namespace color
  {
   namespace operation
    {
     namespace arithmetic
      {

       template< typename category_name >
        inline
        ::color::_internal::model< category_name >
        operator +( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          ::color::_internal::model< category_name > result;
          ::color::operation::addition::full( result, left, right );
          return result;
         }

       template< typename category_name>
        inline
        ::color::_internal::model< category_name > &
        operator +=( ::color::_internal::model< category_name > & result, ::color::_internal::model< category_name > const&  right )
         {
          ::color::operation::addition::accumulate( result, right );
          return result;
         }

       template< typename category_name >
        inline
        ::color::_internal::model< category_name >
        operator -( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          ::color::_internal::model< category_name > result;
          ::color::operation::subtract::full( result,  left, right );
          return result;
         }


       template< typename category_name, typename scalar_name >
        inline
        ::color::_internal::model< category_name >
        operator *
         (
           scalar_name                                const& left
          ,::color::_internal::model< category_name > const& right
         )
         {
          ::color::_internal::model< category_name > result;
          ::color::operation::scale::full( result,  left, right );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
        ::color::_internal::model< category_name >
        operator *
         (
           ::color::_internal::model< category_name > const & left
          ,scalar_name                                const & right
         )
         {
          ::color::_internal::model< category_name > result;
          ::color::operation::scale::full( result, right, left );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
        ::color::_internal::model< category_name >
        operator /
         (
           ::color::_internal::model< category_name > const & left
          ,scalar_name                                const & right
         )
         {
          ::color::_internal::model< category_name > result;
          ::color::operation::scale::full( result,  scalar_name(1) / right, left );
          return result;
         }


       template< typename category_name, typename scalar_name >
        inline
        ::color::_internal::model< category_name > &
        operator -=( ::color::_internal::model< category_name > & result, scalar_name const&  left )
         {
          ::color::operation::subtract::accumulate( result, left );
          return result;
         }


       template< typename category_name, typename scalar_name >
        inline
       ::color::_internal::model< category_name > &
        operator *=(::color::_internal::model< category_name > & result, scalar_name const&  scalar )
         {
         ::color::operation::scale::accumulate( result, scalar );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
       ::color::_internal::model< category_name > &
        operator /=(::color::_internal::model< category_name > & result, scalar_name const&  scalar )
         {
         ::color::operation::scale::accumulate( result, scalar_name(1) / scalar );
          return result;
         }
      }
    }
  }

#endif
