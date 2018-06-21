#ifndef color_generic_operation_compare_equal
#define color_generic_operation_compare_equal

// ::color::compare::equal(left,right)

#include "../../generic/model.hpp"





 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      bool equal
       (
         ::color::model< category_name >  const& left
        ,::color::model< category_name >  const& right
       )
       {
        return left.container() == right.container();
       }

     template< typename tag_name, typename category_name >
      bool equal
       (
         ::color::constant::base< tag_name >  const& left
        ,::color::model< category_name >      const& right
       )
       {
        return ::color::model< category_name >( left ).container() == right.container();
       }

     template < typename category_name, typename tag_name >
      bool equal
       (
         ::color::model< category_name >      const& left
        ,::color::constant::base< tag_name >  const& right
       )
       {
        return left.container() == ::color::model< category_name >( right ).container();
       }

     namespace  operators
      {

       template< typename category_name >
        inline
        bool
        operator ==( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::equal( left, right );
         }
         
       template< typename tag_name, typename category_name >
        inline
        bool
        operator ==( ::color::constant::base< tag_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::equal( left, right );
         }

       template< typename category_name, typename tag_name >
        inline
        bool
        operator ==(::color::model< category_name > const& left, ::color::constant::base< tag_name > const&  right )
         {
          return ::color::compare::equal( left, right );
         }

      }
    }
 }

#endif
