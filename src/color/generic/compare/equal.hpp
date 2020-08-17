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
        return ::color::compare::equal< category_name >( ::color::model< category_name >( left ), right );
       }

     template < typename category_name, typename tag_name >
      bool equal
       (
         ::color::model< category_name >      const& left
        ,::color::constant::base< tag_name >  const& right
       )
       {
        return ::color::compare::equal< category_name >( ::color::model< category_name >( left ), right );
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

     namespace functor
      {

       template< typename category_name >
        class equal
         {
          public:
           typedef ::color::model< category_name > value_type;
           bool operator ()( value_type const& left, value_type const& right )const
            {
             return ::color::compare::equal( left, right );
            }
         };

      }

    }
  }

#if !defined( COLOR_DO_NOT_SPECIALIZE_STD_COMPARISON )

 namespace std
  {

    template< typename category_name >
     struct equal_to< ::color::model< category_name >  >
      {
       private:
         typedef ::color::model< category_name > value_type;
       public:
         bool operator ()( value_type const& left, value_type const& right )const
          {
           return ::color::compare::equal( left, right );
          }
      };

  }

#endif

#endif
