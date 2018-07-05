#ifndef color_lab_category
#define color_lab_category

// ::color::category::lab<tag,reference>
// ::color::category::lab_uint8<tag>


#include "./constant/reference.hpp"



namespace color
 {
  namespace category
   {

    template
      <
        typename tag_name
       ,::color::constant::lab::reference_enum reference_number
      >
     struct lab
      {
       typedef void tag_type;
      };

    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_uint8   = ::color::category::lab< std::uint8_t , reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_uint16  = ::color::category::lab< std::uint16_t, reference_number >;
  //template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_uint24  = ::color::category::lab< std::uint24_t, reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_uint32  = ::color::category::lab< std::uint32_t, reference_number >;
  //template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_uint48  = ::color::category::lab< std::uint48_t, reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_uint64  = ::color::category::lab< std::uint64_t, reference_number >;

    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_int8   = ::color::category::lab< std::int8_t , reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_int16  = ::color::category::lab< std::int16_t, reference_number >;
  //template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_int24  = ::color::category::lab< std::int24_t, reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_int32  = ::color::category::lab< std::int32_t, reference_number >;
  //template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_int48  = ::color::category::lab< std::int48_t, reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_int64  = ::color::category::lab< std::int64_t, reference_number >;


    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_float   = ::color::category::lab< float        , reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_double  = ::color::category::lab< double       , reference_number >;
    template< ::color::constant::lab::reference_enum reference_number= ::color::constant::lab::CIE_entity > using lab_ldouble = ::color::category::lab< long double  , reference_number >;
   }
 }

#endif
