#ifndef  color_generic_operation_distance_operation
#define  color_generic_operation_distance_operation

// ::color::operation::distance( left, right )
// ::color::operation::distance( left, right, scalar )
// ::color::operation::distance( left, right, scalar, scalar )

#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {

     template
      <
        enum ::color::constant::distance::reference_enum reference_number = ::color::constant::distance::euclid_entity
       ,typename category_name
      >
      typename ::color::trait::scalar< category_name >::instance_type
      distance
       (
         ::color::model< category_name > const&  left
        ,::color::model< category_name > const& right
       )
       {
        return ::color::operation::_internal::usher<category_name, category_name, reference_number>::process( left, right );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<  category_left_name > const&  left
        ,::color::model< category_right_name > const& right
       )
       {
        return ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::process( left, right );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<category_left_name>  const& left
        ,::color::model<category_right_name> const& right
        , typename ::color::trait::scalar< category_left_name >::instance_type const& scale
       )
       {
        typedef ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number > usher_type;
        return usher_type::process( left, right, scale );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<category_left_name> const& left
        ,::color::model<category_right_name> const& right
        , typename ::color::trait::scalar< category_left_name >::instance_type const& l
        , typename ::color::trait::scalar< category_left_name >::instance_type const& c
       )
       {
        return ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::process( left, right, l, c );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<category_left_name> const& left
        ,::color::model<category_right_name> const& right
        , typename ::color::trait::scalar< category_left_name >::instance_type const& K_L
        , typename ::color::trait::scalar< category_left_name >::instance_type const& K_1
        , typename ::color::trait::scalar< category_left_name >::instance_type const& K_2
       )
       {
        return ::color::operation::_internal::usher< category_left_name, category_right_name, reference_number >::process( left, right, K_L, K_1, K_2 );
       }

    }
  }

#endif
