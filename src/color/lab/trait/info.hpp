#ifndef color_lab_trait_info
#define color_lab_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::lab_uint8  <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_uint16 <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_uint32 <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_uint64 <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_float  <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_double <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_ldouble<> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

    template <> struct info< ::color::category::lab_int8  <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_int16 <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_int32 <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::lab_int64 <> >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

    // template
    //  <
    //    typename tag_name
    //   ,::color::constant::lab::reference_enum      lab_reference_number
    //  >
    //  struct info< ::color::category::lab< tag_name, lab_reference_number > >
    //   {
    //    public:
    //       enum { implemented_entity = true };
    //       enum {  meaningful_entity = true };
    //   };

   }
 }

#endif
