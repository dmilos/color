#ifndef color_type_invalid
#define color_type_invalid

// ::color::type::invalid
// ::color::type::invalid_t
// ::color::type::invalid_type

namespace color
 {
  namespace type
   {
    // type to be used to indicate that wrong type is used
    struct invalid{};

    typedef invalid invalid_t, invalid_type;

   }
 }

#endif