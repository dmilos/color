#ifndef color__internal_trait_2ad5c81b_a127_4589_b065_b9f05265855d
#define color__internal_trait_2ad5c81b_a127_4589_b065_b9f05265855d

#include <cstdint>

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct trait
      {
       private:
         typedef unsigned IntNum32; 
         typedef unsigned char IntNum8;

       public:
         typedef IntNum32          index_type;
         typedef IntNum32 const&   index_const_input_type;
         typedef IntNum32      &   index_input_type;
         typedef IntNum32 const&   index_const_return_type;
         typedef IntNum32      &   index_return_type;

        typedef  IntNum32           container_type;
        typedef  container_type const&   container_const_input_type;
        typedef  container_type      &   container_input_type;
        typedef  container_type const&    container_const_return_type;
        typedef  container_type      &    container_return_type; //!< May or may not be able to modyfy or to have property with effect of real modification

        typedef  IntNum8           component_type;
        typedef  component_type          component_const_return_type;
        typedef  component_type  const   component_return_type; //!< May or may not be able to modyfy or to have property with effect of real modification

        typedef  component_type const&   component_const_input_type;
        typedef  component_type      &   component_input_type;

        typedef  void    set_return_type;

        static component_const_return_type get( container_const_input_type container, index_const_input_type index )
         {
          return 0;
         }
        static component_return_type get( container_input_type container, index_const_input_type index )
         {
          return 0;
         }

        static set_return_type set( container_const_input_type container, index_const_input_type index, component_const_input_type component )
         {
          return 0;
         }
     };

  }
 }

#endif
