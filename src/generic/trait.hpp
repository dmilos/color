#ifndef color_generic_trait_34a41879_90a1_4a04_ba79_a57bc576fea1
#define color_generic_trait_34a41879_90a1_4a04_ba79_a57bc576fea1

#include <array>
#include "../_internal/trait.hpp"
#include "../generic/category.hpp"

namespace color
 {
  namespace generic
   {
    namespace traitX
     {
      template < typename number_name, unsigned legth >
       struct generic
        {
         private:
           typedef unsigned IntNum32; 
           typedef unsigned char IntNum8;
         public:
           typedef number_name number_type;

           typedef IntNum32          index_type;
           typedef IntNum32 const&   index_const_input_type;
           typedef IntNum32      &   index_input_type;
           typedef IntNum32 const    index_const_return_type;
           typedef IntNum32      &   index_return_type;
 
           typedef  std::array<number_type, legth>        container_type;
           typedef  container_type const&    container_const_input_type;
           typedef  container_type      &    container_input_type;
           typedef  container_type const&    container_const_return_type;
           typedef  container_type      &    container_return_type;
   
           typedef  number_type          component_type;
           typedef  component_type const&   component_const_return_type;
           typedef  component_type      &   component_return_type;
   
           typedef  component_type const&   component_const_input_type;
           typedef  component_type      &   component_input_type;
   
           typedef  void    set_return_type;
   
           static component_const_return_type get( container_const_input_type container, index_const_input_type index )
            {
             return container[index];
            }
           static component_return_type get( container_input_type container, index_const_input_type index )
            {
             return container[index];
            }
   
           static set_return_type set( container_const_input_type container, index_const_input_type index, component_const_input_type value )
            {
             container[index] = value;
            }

            static index_const_return_type size(){ return legth; }
         };

     }
   }

   namespace _internal
    {

     template< unsigned length >
      struct trait< ::color::generic::traitX::generic< float, length > >
       : public ::color::_internal::trait< ::color::category::generic_float<length >  >
       {
       };

     template< unsigned length >
      struct trait< ::color::generic::traitX::generic< double, length > >
       : public ::color::_internal::trait< ::color::category::generic_double<length >  >
       {
       };

     template< unsigned length >
      struct trait< ::color::generic::traitX::generic< long double, length > >
       : public ::color::_internal::trait< ::color::category::generic_ldouble<length >  >
       {
       };

    }

 }

#endif


