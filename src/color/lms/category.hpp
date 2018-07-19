#ifndef color_lms_category
#define color_lms_category
// ::color::category::lms<tag>



#include "./constant/reference.hpp"


namespace color
 {
  namespace category
   {

    template< typename tag_name, ::color::constant::lms::reference_enum lms_reference_number >
     struct lms
      {
       typedef tag_name tag_type;
      };

    template< ::color::constant::lms::reference_enum reference_number > using lms_uint8   = ::color::category::lms< std::uint8_t , reference_number >;
    template< ::color::constant::lms::reference_enum reference_number > using lms_uint16  = ::color::category::lms< std::uint16_t, reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_uint24  = ::color::category::lms< std::uint24_t, reference_number >;
    template< ::color::constant::lms::reference_enum reference_number > using lms_uint32  = ::color::category::lms< std::uint32_t, reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_uint48  = ::color::category::lms< std::uint48_t, reference_number >;
    template< ::color::constant::lms::reference_enum reference_number > using lms_uint64  = ::color::category::lms< std::uint64_t, reference_number >;

  //template< ::color::constant::lms::reference_enum reference_number > using lms_int8    = ::color::category::lms< std::int8_t , reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_int16   = ::color::category::lms< std::int16_t, reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_int24   = ::color::category::lms< std::int24_t, reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_int32   = ::color::category::lms< std::int32_t, reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_int48   = ::color::category::lms< std::int48_t, reference_number >;
  //template< ::color::constant::lms::reference_enum reference_number > using lms_int64   = ::color::category::lms< std::int64_t, reference_number >;


    template< ::color::constant::lms::reference_enum reference_number > using lms_float   = ::color::category::lms< float        , reference_number >;
    template< ::color::constant::lms::reference_enum reference_number > using lms_double  = ::color::category::lms< double       , reference_number >;
    template< ::color::constant::lms::reference_enum reference_number > using lms_ldouble = ::color::category::lms< long double  , reference_number >;

   }
 }

#endif
