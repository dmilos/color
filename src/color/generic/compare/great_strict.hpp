#ifndef color_generic_operation_compare_great_strict
#define color_generic_operation_compare_great_strict

// using namespace  ::color::compare::great_strict

#include "../../generic/model.hpp"





 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      inline bool great_strict
       (
         ::color::model< category_name >  const& left
        ,::color::model< category_name >  const& right
       )
       {
        return left.container() >  right.container();
       }

     template< typename tag_name, typename category_name >
      inline bool great_strict
       (
         ::color::constant::base< tag_name >  const& left
        ,::color::model< category_name >      const& right
       )
       {
        return ::color::compare::great_strict< category_name >( ::color::model< category_name >( left ), right );
       }

     template < typename category_name, typename tag_name >
      inline bool great_strict
       (
         ::color::model< category_name >      const& left
        ,::color::constant::base< tag_name >  const& right
       )
       {
        return ::color::compare::great_strict< category_name >( left, ::color::model< category_name >( right ) );
       }

     namespace  operators
      {

       template< typename category_name >
        inline
        bool
        operator > ( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::great_strict( left, right );
         }

       template< typename tag_name, typename category_name >
        inline
        bool
        operator >( ::color::constant::base< tag_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::great_strict( left, right );
         }

       template< typename category_name, typename tag_name >
        inline
        bool
        operator >(::color::model< category_name > const& left, ::color::constant::base< tag_name > const&  right )
         {
          return ::color::compare::great_strict( left, right );
         }

      }

     namespace functor
      {

       template< typename category_name >
        class great_strict
         {
          public:
           typedef ::color::model< category_name > value_type;
           bool operator ()( value_type const& left, value_type const& right )const
            {
             return ::color::compare::great_strict(left,right);
            }
         };

      }

    }
  }

#if !defined( COLOR_DO_NOT_SPECIALIZE_STD_COMPARISON )

 namespace std
  {
 
    template< typename category_name >
     struct greater< ::color::model< category_name >  >
      {
       private:
         typedef ::color::model< category_name > value_type;
       public:
         bool operator ()( value_type const& left, value_type const& right )const
          {
           return ::color::compare::great_strict( left, right );
          }
       };
 
  }

#endif

#endif
