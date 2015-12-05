#ifndef example_print_color
#define example_print_color

template< typename category_name >
 inline void print( color::_internal::model< category_name > const& gray )
  {
   typedef color::_internal::model< category_name > model_type;
   std::cout << "<";

   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     std::cout << " " << double( gray.get( index ) ) << ", ";
    }
    std::cout << ">";
  }

#endif
