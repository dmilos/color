#ifndef color_type_scramble
#define color_type_scramble

namespace color
 {
  namespace type
   {

    template< unsigned first_position, unsigned second_position>
     struct scramble2
     {
      //TODO C++14 static_assert( first_position != second_position, "First and second place used for different components." );
     };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct scramble3
      {
       //TODO C++14 static_assert( first_position  != second_position, "First and second place used for different components." );
       //TODO C++14 static_assert( first_position  != third_position,  "First and third place used for different components."  );
       //TODO C++14 static_assert( second_position != third_position,  "Second and third place used for different components." );
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct scramble4
      {
       //TODO C++14 static_assert( first_position  != second_position,  "First and second place used for different components."   );
       //TODO C++14 static_assert( first_position  != third_position,   "First and third place used for different components."    );
       //TODO C++14 static_assert( first_position  != fourth_position,  "First and fourth place used for different components."   );

       //TODO C++14 static_assert( second_position != third_position,   "Second and third place used for different components."   );
       //TODO C++14 static_assert( second_position != fourth_position,  "Second and fourth place used for different components."  );

       //TODO C++14 static_assert( third_position  != fourth_position,  "Third and fourth place used for different components."   );
      };

   }
 }

#endif
