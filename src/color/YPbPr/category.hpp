#ifndef color_YPbPr_category
#define color_YPbPr_category
// ::color::category::YPbPr<tag,reference>

#include "./constant/reference.hpp"

namespace color
 {
  namespace category
   {

    template< typename tag_name, ::color::constant::YPbPr::reference_enum reference_number  >
     struct YPbPr
      {
       typedef void tag_type;
      };

    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_uint8   = ::color::category::YPbPr< std::uint8_t  , reference_number >;
    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_uint16  = ::color::category::YPbPr< std::uint16_t , reference_number >;
  //template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_uint24  = ::color::category::YPbPr< std::uint24_t , reference_number >;
    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_uint32  = ::color::category::YPbPr< std::uint32_t , reference_number >;
  //template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_uint48  = ::color::category::YPbPr< std::uint48_t , reference_number >;
    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_uint64  = ::color::category::YPbPr< std::uint64_t , reference_number >;
    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_float   = ::color::category::YPbPr< float         , reference_number >;
    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_double  = ::color::category::YPbPr< double        , reference_number >;
    template< ::color::constant::YPbPr::reference_enum reference_number > using YPbPr_ldouble = ::color::category::YPbPr< long double   , reference_number >;

   }
 }

#endif
