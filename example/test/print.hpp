#ifndef example_print_color
#define example_print_color

#include <iostream>
#include <iomanip>

template< typename category_name >
 inline void print( color::model< category_name > const& gray )
  {
   typedef color::model< category_name > model_type;
   std::cout << "<";

   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     std::cout << " " << std::setprecision( 20 ) << double( gray.get( index ) ) << ", ";
    }
    std::cout << ">";
  }

#endif
