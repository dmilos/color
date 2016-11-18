#ifndef color_YPbPr_trait_info
#define color_YPbPr_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_uint8  <reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };
    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_uint16 <reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };
    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_uint32 <reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };
    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_uint64 <reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };
    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_float  <reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };
    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_double <reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };
    template < ::color::constant::YPbPr::reference_enum reference_number > struct info< ::color::category::YPbPr_ldouble<reference_number> >  {  public: enum { implemented_entity = true }; enum { meaningful_entity = true }; };

   }
 }

#endif
