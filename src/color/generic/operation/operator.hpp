#ifndef  color_generic_operation_operator_123
#define color_generic_operation_operator_123
// using namespace  color::operation::arithmetic
// using namespace  color::operation::compare


#include "./addition.hpp"
#include "./scale.hpp"
#include "./subtract.hpp"

#include "./compare.hpp"


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
          ::color::operation::addition( result, left, right );
          return result;
         }

       template< typename category_name>
        inline
        ::color::_internal::model< category_name > &
        operator +=( ::color::_internal::model< category_name > & result, ::color::_internal::model< category_name > const&  right )
         {
          ::color::operation::addition( result, right );
          return result;
         }

       template< typename category_name >
        inline
        ::color::_internal::model< category_name >
        operator -( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          ::color::_internal::model< category_name > result;
          ::color::operation::subtract( result,  left, right );
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
          ::color::operation::scale( result,  left, right );
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
          ::color::operation::scale( result, right, left );
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
          ::color::operation::scale( result,  scalar_name(1) / right, left );
          return result;
         }


       template< typename category_name, typename scalar_name >
        inline
        ::color::_internal::model< category_name > &
        operator -=( ::color::_internal::model< category_name > & result, scalar_name const&  left )
         {
          ::color::operation::subtract( result, left );
          return result;
         }


       template< typename category_name, typename scalar_name >
        inline
       ::color::_internal::model< category_name > &
        operator *=(::color::_internal::model< category_name > & result, scalar_name const&  scalar )
         {
         ::color::operation::scale( result, scalar );
          return result;
         }

       template< typename category_name, typename scalar_name >
        inline
       ::color::_internal::model< category_name > &
        operator /=(::color::_internal::model< category_name > & result, scalar_name const&  scalar )
         {
         ::color::operation::scale( result, scalar_name(1) / scalar );
          return result;
         }

      }

     namespace compare
      {
       template< typename category_name, typename scalar_name >
        inline
        bool
        operator ==( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          return ::color::operation::compare::equal( left, right );
         }

       template< typename category_name, typename scalar_name >
        inline
        bool
        operator !=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          return ::color::operation::compare::different( left, right );
         }

       template< typename category_name, typename scalar_name >
        inline
        bool
        operator <( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          return ::color::operation::compare::less_strict( left, right );
         }

       template< typename category_name, typename scalar_name >
        inline
        bool
        operator >( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          return ::color::operation::compare::great_strict( left, right );
         }

       template< typename category_name, typename scalar_name >
        inline
        bool
        operator <=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          return ::color::operation::compare::less_or_equal( left, right );
         }

       template< typename category_name, typename scalar_name >
        inline
        bool
        operator >=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
         {
          return ::color::operation::compare::great_or_equal( left, right );
         }

      }

    }
  }

#endif
