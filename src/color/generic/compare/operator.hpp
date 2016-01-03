#ifndef  color_generic_compare_operator
#define color_generic_compare_operator
// using namespace  color::compare

#include "./different.hpp"
#include "./equal.hpp"
#include "./great_or_equal.hpp"
#include "./great_strict.hpp"
#include "./less_or_equal.hpp"
#include "./less_strict.hpp"

 namespace color
  {
   namespace compare
    {

     template< typename category_name >
      inline
      bool
      operator ==( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::equal( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator !=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::different( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator <( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::less_strict( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator >( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::great_strict( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator <=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::less_or_equal( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator >=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::great_or_equal( left, right );
       }

    }
  }

#endif
