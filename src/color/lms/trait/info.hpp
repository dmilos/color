#ifndef color_lms_trait_info
#define color_lms_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_uint8  <lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_uint16 <lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_uint32 <lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_uint64 <lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_float  <lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_double <lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template< ::color::constant::lms::reference_enum  lms_reference_number > struct info< ::color::category::lms_ldouble<lms_reference_number> > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };


   }
 }

#endif
