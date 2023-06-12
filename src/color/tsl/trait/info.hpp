#ifndef color_tsl_trait_info
#define color_tsl_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template < typename tag_name >
     struct info< ::color::category::tsl< tag_name > >
      {
       public:
        enum { implemented_entity = false };
        enum {  meaningful_entity = false };
        enum {  size_entity = 3 };
      };

  //template <> struct info< ::color::category::tsl_bool >     {  public: enum { implemented_entity = false}; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_uint8 >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_uint16 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_uint32 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_uint64 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_float >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_double >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::tsl_ldouble >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

   }
 }

#endif
