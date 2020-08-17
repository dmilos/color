#ifndef color_generic_operation_compare_different
#define color_generic_operation_compare_different

// ::color::compare::different(left,right)

#include "../../generic/model.hpp"





 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      bool different
       (
         ::color::model< category_name >  const& left
        ,::color::model< category_name >  const& right
       )
       {
        return left.container() != right.container();
       }

     template< typename tag_name, typename category_name >
      bool different
       (
         ::color::constant::base< tag_name >  const& left
        ,::color::model< category_name >      const& right
       )
       {
        return ::color::compare::different< category_name >( ::color::model< category_name >( left ), right );
       }

     template < typename category_name, typename tag_name >
      bool different
       (
         ::color::model< category_name >      const& left
        ,::color::constant::base< tag_name >  const& right
       )
       {
        return ::color::compare::different< category_name >( ::color::model< category_name >( left ), right );
       }

     namespace  operators
      {

       template< typename category_name >
        inline
        bool
        operator !=( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::different( left, right );
         }

       template< typename tag_name, typename category_name >
        inline
        bool
        operator !=( ::color::constant::base< tag_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::different( left, right );
         }

       template< typename category_name, typename tag_name >
        inline
        bool
        operator !=(::color::model< category_name > const& left, ::color::constant::base< tag_name > const&  right )
         {
          return ::color::compare::different( left, right );
         }

      }

     namespace functor
      {

       template< typename category_name >
        class different
         {
          public:
           typedef ::color::model< category_name > value_type;
           bool operator ()( value_type const& left, value_type const& right )const
            {
             return ::color::compare::different( left, right );
            }
         };

      }

    }
  }

#if !defined( COLOR_DO_NOT_SPECIALIZE_STD_COMPARISON )

 namespace std
  {

    template< typename category_name >
     struct not_equal_to< ::color::model< category_name >  >
      {
       private:
         typedef ::color::model< category_name > value_type;
       public:
         bool operator ()( value_type const& left, value_type const& right )const
          {
           return ::color::compare::different( left, right );
          }
      };

  }

#endif

#endif
