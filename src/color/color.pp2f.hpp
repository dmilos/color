


















namespace color {
namespace _internal {
namespace utility {
namespace type {

template< typename index_name >
struct index {
public:
	typedef index_name instance_type;

	typedef instance_type const const_type;

	typedef instance_type const& return_image_type;
	typedef instance_type const& return_direct_type;
	typedef instance_type & return_original_type;

	typedef instance_type const& input_const_type, param_const_input_type;
	typedef instance_type input_type, param_input_type;
	typedef instance_type & output_type, param_output_type;
};

}
}
}
}

namespace color {
namespace _internal {

template< typename category_name >
struct index
		: public ::color::_internal::utility::type::index< unsigned > {
public:

	typedef ::color::_internal::utility::type::index< unsigned > utility_type;

	typedef typename utility_type::instance_type instance_type;

	typedef typename utility_type::const_type const_type;

	typedef typename utility_type::return_image_type return_image_type;
	typedef typename utility_type::return_original_type return_original_type;

	typedef typename utility_type::input_const_type input_const_type;
	typedef typename utility_type::input_type input_type;
	typedef typename utility_type::output_type output_type;
};

}
}





namespace color {
namespace _internal {

template< typename category_name >
struct component {
public:
	typedef unsigned char instance_type;
	typedef instance_type const const_type;

	typedef instance_type const return_const_type;
	typedef instance_type const return_const_ref_type;
	typedef instance_type return_type;
	typedef instance_type return_ref_type;

	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::index< category_name > index_trait_type;
	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

};

}
}






namespace color {
namespace _internal {

template< typename category_name >
struct container {
public:
	typedef unsigned int instance_type;

	typedef instance_type const const_type;

	typedef instance_type const return_const_type;
	typedef instance_type const& return_const_ref_type;
	typedef instance_type & return_type;
	typedef instance_type & return_ref_type;

	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::index< category_name > index_trait_type;


	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::component< category_name > component_trait_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;
	typedef typename component_trait_type::instance_type component_type;

	typedef void set_return_type;


	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return (component_type)((container >> (index << 3)) & 0xFF);
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return (component_type)((container >> (index << 3)) & 0xFF);
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container = (container & ~(0xFF << (index << 3))) | (((instance_type)value) << (index << 3));
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container = (container & ~(0xFF << (index << 3))) | (((instance_type)value) << (index << 3));
	}

	static index_return_image_type size() {
		static index_instance_type length = 4;
		return length;
	}
};

}
}










namespace color {
namespace _internal {
namespace utility {
namespace type {

template < typename number_name, typename number_const_return_name = number_name const& >
struct bound {
public:
	typedef number_name number_type;
	typedef number_const_return_name number_const_return_type;


	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value=0;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value=0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<bool, bool const& > {
	typedef bool number_type;
	typedef bool const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value = true;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value = false;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint8_t, std::uint8_t const& > {
	typedef std::uint8_t number_type;
	typedef std::uint8_t const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value = 255;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value = 0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint16_t, std::uint16_t const& > {
	typedef std::uint16_t number_type;
	typedef std::uint16_t const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value = 0xFFFF;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value = 0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint32_t, std::uint32_t const& > {
	typedef std::uint32_t number_type;
	typedef std::uint32_t const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value = 0xFFFFFFFF;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value = 0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint64_t, std::uint64_t const& > {
	typedef std::uint64_t number_type;
	typedef std::uint64_t const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value = 0xFFFFFFFFFFFFFFFFu;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value = 0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<float, float const& > {
	typedef float number_type;
	typedef float const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value=1;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value=0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<double, double const& > {
	typedef double number_type;
	typedef double const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value=1;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value=0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<long double, long double const& > {
	typedef long double number_type;
	typedef long double const& number_const_return_type;

	typedef bound<number_type,number_const_return_type> this_type;

	static number_const_return_type maximum() {
		static number_type value = 1;
		return value;
	}

	static number_const_return_type minimum() {
		static number_type value = 0;
		return value;
	}

	static number_const_return_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}

};

}
}
}
}





namespace color {
namespace _internal {
namespace utility {
namespace type {

template < typename type_name >
struct traitC {
public:
	typedef type_name instance_type;

	typedef instance_type const const_type;

	typedef instance_type const& return_const_type;
	typedef instance_type return_type;


	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

};

}
}
}
}


namespace color {
namespace _internal {
namespace utility {
namespace bound {

template< typename value_name, typename index_name >
struct general {
public:
	typedef value_name value_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitC< value_name > component_trait_type;
	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	typedef ::color::_internal::utility::type::bound< component_instance_type, component_return_const_type > bound_type;

	template< index_instance_type index >
	static component_return_const_type maximum() {
		static const component_instance_type component = bound_type::maximum();
		return component;
	}

	static component_return_const_type maximum(index_input_const_type index) {
		static const component_instance_type component = bound_type::maximum();
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type minimum() {
		static const component_instance_type component = bound_type::minimum();
		return component;
	}

	static component_return_const_type minimum(index_input_const_type index) {
		static const component_instance_type component = bound_type::minimum();
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type range() {
		static const component_instance_type component = bound_type::range();
		return component;
	}

	static component_return_const_type range(index_input_const_type index) {
		static const component_instance_type component = bound_type::range();
		return component;
	}
};

}
}
}
}



namespace color {
namespace _internal {

template< typename category_name >
struct bound
		: public ::color::_internal::utility::bound::general
		<
		typename ::color::_internal::component< category_name >::instance_type
		,typename ::color::_internal::index< category_name >::instance_type
		> {
public:
	typedef category_name category_type;

	typedef ::color::_internal::component< category_name > component_trait_type;
	typedef ::color::_internal::index< category_name > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename index_trait_type::instance_type index_instance_type;

	typedef ::color::_internal::utility::bound::general<component_instance_type, index_instance_type > general_type;

	typedef ::color::_internal::bound< category_name > this_type;

	using general_type::minimum;
	using general_type::maximum;
	using general_type::range;
};
}
}

namespace color {
namespace _internal {

template< typename category_name >
struct trait
		: public ::color::_internal::index< category_name >
		, public ::color::_internal::container< category_name >
		, public ::color::_internal::component< category_name >
		, public ::color::_internal::bound< category_name > {
public:
	typedef ::color::_internal::index< category_name > index_trait_type;
	typedef ::color::_internal::component< category_name > component_trait_type;
	typedef ::color::_internal::container< category_name > container_trait_type;
	typedef ::color::_internal::bound< category_name > bound_trait_type;


	typedef typename index_trait_type::instance_type index_type;

	typedef typename index_trait_type::return_image_type index_return_image_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::input_type index_input_type;

	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::return_type component_return_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;
	typedef typename component_trait_type::input_type component_input_type;

	typedef typename container_trait_type::instance_type container_type;
	typedef typename container_trait_type::const_type container_const_type;
	typedef typename container_trait_type::return_const_type container_return_const_type;
	typedef typename container_trait_type::return_type container_return_type;
	typedef typename container_trait_type::input_const_type container_input_const_type;
	typedef typename container_trait_type::input_type container_input_type;

	typedef typename container_trait_type::set_return_type set_return_type;

	using bound_trait_type::minimum;
	using bound_trait_type::maximum;
	using bound_trait_type::range;
};

}
}























namespace color {
namespace _internal {

template< typename category_name, typename float_name = double >
struct diverse {
public:
	typedef float_name float_type;
	typedef ::color::_internal::bound< category_name > bound_trait_type;
	typedef ::color::_internal::component< category_name > component_trait_type;
	typedef ::color::_internal::index< category_name > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::return_type component_return_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	static
	component_return_type
	process(float_type const& normal, index_input_const_type index) {
		float_type divergent = normal;
		divergent *= bound_trait_type::range(index);
		divergent += bound_trait_type::minimum(index);
		return component_instance_type(divergent);
	}

	template< index_instance_type index_size >
	static
	component_return_type
	process(float_type const& normal) {
		float_type divergent = normal;
		divergent *= bound_trait_type::template range<index_size>();
		divergent += bound_trait_type::template minimum<index_size>();
		return component_instance_type(divergent);
	}
};

}
}
namespace color {
namespace _internal {

template< typename category_name, typename float_name = double >
struct normalize {
public:
	typedef float_name float_type;
	typedef ::color::_internal::bound< category_name > bound_trait_type;
	typedef ::color::_internal::component< category_name > component_trait_type;
	typedef ::color::_internal::index< category_name > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	static
	float_type
	process(component_input_const_type divergent, index_input_const_type index) {
		float_name normal = static_cast<component_instance_type>(divergent);
		normal -= bound_trait_type::minimum(index);
		normal /= bound_trait_type::range(index);
		return normal;
	}

	template< index_instance_type index_size >
	static
	float_type
	process(component_input_const_type divergent) {
		float_name normal = static_cast<component_instance_type>(divergent);
		normal -= bound_trait_type::template minimum<index_size>();
		normal /= bound_trait_type::template range<index_size>();
		return normal;
	}
};

}
}

namespace color {
namespace _internal {

template
<
typename category_left_name
,typename category_right_name
,typename float_name = double
>
struct reformat {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	typedef typename ::color::_internal::component< category_left_name >::return_type left_component_return_type;
	typedef typename ::color::_internal::index< category_left_name >::input_const_type left_index_const_input_type;
	typedef typename ::color::_internal::index< category_left_name >::instance_type left_index_instance_type;

	typedef typename ::color::_internal::component< category_right_name >::input_const_type right_component_const_input_type;
	typedef typename ::color::_internal::index< category_right_name >::input_const_type right_index_const_input_type;
	typedef typename ::color::_internal::index< category_right_name >::instance_type right_index_instance_type;

	static
	left_component_return_type
	process
	(
		left_index_const_input_type left_index
		,right_component_const_input_type right_component
		,right_index_const_input_type right_index
	) {
		return diverse_type::process
			   (
				   normalize_type::process
				   (
					   right_component
					   ,right_index
				   )
				   , left_index
			   );
	}

	template
	<
	left_index_instance_type left_index_size
	>
	static
	left_component_return_type
	process
	(
		right_component_const_input_type right_component
		,right_index_const_input_type right_index
	) {
		return diverse_type::template process< left_index_size >
		(
			normalize_type::process
			(
				right_component
				,right_index
			)
		);
	}

	template
	<
	left_index_instance_type left_index_size
	,right_index_instance_type right_index_size
	>
	static
	left_component_return_type
	process
	(
		right_component_const_input_type right_component
	) {
		return diverse_type::template process< left_index_size >
		(
			normalize_type::template process< right_index_size >
			(
				right_component
			)
		);
	}
};

}
}


namespace color {
namespace _internal {

template< typename category_left_name, typename category_right_name >
struct convert {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::trait<category_left_type> category_left_trait_type;
	typedef ::color::_internal::trait<category_right_type> category_right_trait_type;

	typedef typename category_left_trait_type::index_type index_type;

	typedef typename category_left_trait_type::container_trait_type container_left_trait_type;
	typedef typename category_right_trait_type::container_trait_type container_right_trait_type;

	typedef typename category_left_trait_type::component_type component_left_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static const index_type min_common_size = std::min< index_type >(container_left_trait_type::size(), container_right_trait_type::size());
		component_left_type value;
		typedef ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
		for(index_type index=0; index < min_common_size; ++index) {
			value = reformat_type::process(index, container_right_trait_type::get(right, index), index);
			container_left_trait_type::set(left, index, value);
		}
	}
};

template< typename category_name >
struct convert< category_name,category_name > {
public:

	typedef ::color::_internal::trait<category_name> category_left_trait_type;
	typedef ::color::_internal::trait<category_name> category_right_trait_type;

	typedef typename category_left_trait_type::container_trait_type container_left_trait_type;
	typedef typename category_right_trait_type::container_trait_type container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		left = right;
	}

};


}
}






namespace color {
namespace _internal {

template< typename category_name >
void init
(
	typename ::color::_internal::trait< category_name >::container_type & container
	, std::initializer_list< typename ::color::_internal::trait< category_name >::component_type > const& ilist
) {
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::container_trait_type container_trait_type;
	typedef typename trait_type::index_type index_type;
	auto ili = ilist.begin();
	index_type index=0;
	for(; index < std::min(container_trait_type::size(), ilist.size()) ; ++index, ++ili) {
		container_trait_type::set(container, index, *ili);
	}
};

}
}

namespace color {
namespace _internal {

template< typename category_name >
class model {
public:
	typedef category_name category_type;

	typedef ::color::_internal::trait<category_type> trait_type;


	typedef typename trait_type::index_type index_type;

	typedef typename trait_type::index_input_const_type index_input_const_type;
	typedef typename trait_type::index_return_image_type index_return_image_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::component_const_type component_const_type;
	typedef typename trait_type::component_return_const_type component_return_const_type;
	typedef typename trait_type::component_return_type component_return_type;
	typedef typename trait_type::component_input_const_type component_input_const_type;
	typedef typename trait_type::component_input_type component_input_type;

	typedef typename trait_type::container_type container_type;
	typedef typename trait_type::container_const_type container_const_type;
	typedef typename trait_type::container_return_const_type container_return_const_type;
	typedef typename trait_type::container_input_const_type container_input_const_type;
	typedef typename trait_type::container_return_type container_return_type;

	typedef typename trait_type::set_return_type set_return_type;

	model() {
	}

	explicit model(container_input_const_type container)
		:m_container(container) {
	}

	explicit model(std::initializer_list<component_type > const& ilist) {
		::color::_internal::init<category_name>(this->m_container, ilist);
	}

	template< typename other_category_name >
	explicit model(::color::_internal::model<other_category_name> const& that) {
		::color::_internal::convert<category_name, other_category_name>::process(this->m_container, that.container());
	}

	template< typename other_category_name >
	model operator=(::color::_internal::model<other_category_name> const& that) {
		::color::_internal::convert<category_name, other_category_name>::process(this->m_container, that.container());
		return *this;
	}

	component_return_const_type
	get(index_input_const_type index)const {
		return trait_type::get(this->m_container, index);
	}

	template< index_type index >
	component_return_const_type
	get()const {
		return trait_type::template get<index>(this->m_container);
	}
	set_return_type
	set(index_input_const_type index, component_input_const_type component) {
		return trait_type::set(this->m_container, index, component);
	}

	template< index_type index >
	set_return_type
	set(component_input_const_type component) {
		trait_type::template set<index>(this->m_container, component);
	}

	component_return_const_type operator[](index_input_const_type index)const {
		return this->get(index);
	}






	container_return_const_type container()const {
		return this->m_container;
	}
	container_return_type container() {
		return this->m_container;
	}

	static index_return_image_type size() {
		return trait_type::size();
	}

private:
	container_type m_container;
};

}
}

namespace color {
namespace operation {
namespace _internal {

template< typename category_name>
struct addition {
public:
	typedef category_name category_type;


	typedef ::color::_internal::trait< category_type > trait_type;

	typedef typename ::color::_internal::model<category_type> model_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::index_type index_type;

	static void accumulate(model_type &result, model_type const& right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, result.get(index) + right.get(index));
		}
	}

	static void full(model_type &result, model_type const& left, model_type const& right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, left.get(index) + right.get(index));
		}
	}
};

}

namespace addition {

template< typename category_name >
void accumulate
(
	::color::_internal::model<category_name> & result
	,::color::_internal::model<category_name> const& right
) {
	color::operation::_internal::addition<category_name>::accumulate(result, right);
}

template< typename category_name >
void full
(
	::color::_internal::model<category_name> & result
	,::color::_internal::model<category_name> const& left
	,::color::_internal::model<category_name> const& right
) {
	::color::operation::_internal::addition<category_name>::full(result, left, right);
}

}
}
}




namespace color {
namespace operation {
namespace _internal {

template< typename category_name >
struct clamp {
public:
	typedef category_name category_type;


	typedef ::color::_internal::trait< category_type > trait_type;

	typedef typename ::color::_internal::model<category_type> model_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::index_type index_type;

	static void accumulate(model_type &result) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			if(result.get() < trait_type::minimum(index)) {
				result.set(index, trait_type::minimum(index));
				continue;
			}
			if(trait_type::maximum(index) < result.get()) {
				result.set(index, trait_type::maximum(index));
				continue;
			}
		}
	}

	static void full(model_type &result, model_type const& right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			if(right.get() < trait_type::minimum(index)) {
				result.set(index, trait_type::minimum(index));
				continue;
			}
			if(trait_type::maximum(index) < right.get()) {
				result.set(index, trait_type::maximum(index));
				continue;
			}
			result.set(index, right.get());
		}
	}

};
}

namespace clamp {

template< typename category_name >
void accumulate
(
	::color::_internal::model<category_name> & result
	,::color::_internal::model<category_name> const& right
) {
	color::operation::_internal::clamp<category_name>::accumulate(result, right);
}

template< typename category_name >
void full
(
	::color::_internal::model<category_name> & result
	,::color::_internal::model<category_name> const& left
	,::color::_internal::model<category_name> const& right
) {
	::color::operation::_internal::clamp<category_name>::full(result, left, right);
}

}
}
}




namespace color {
namespace operation {
namespace _internal {

template< typename category_name, typename scalar_name >
struct convex {
public:
	typedef category_name category_type;
	typedef scalar_name scalar_type;
	typedef scalar_type const& scalar_const_input_type;

	typedef color::_internal::trait< category_type > trait_type;

	typedef typename color::_internal::model<category_type> model_type;
	typedef model_type & model_input_type;
	typedef model_type const& model_const_input_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::index_type index_type;

	static void accumulate(model_input_type result, scalar_const_input_type scalar, model_const_input_type right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, scalar * result.get(index) +(scalar_type(1) - scalar) *right.get(index));
		}
	}

	static void full(model_input_type result, model_const_input_type left, scalar_const_input_type scalar, model_const_input_type right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, scalar * left.get(index) +(scalar_type(1) - scalar) *right.get(index));
		}
	}

};
}

namespace convex {

template< typename category_name, typename scalar_name >
void accumulate
(
	color::_internal::model<category_name> & result
	,scalar_name const& scalar
	,color::_internal::model<category_name> const& right
) {
	color::operation::_internal::convex<category_name,scalar_name>::accumulate(result, scalar, right);
}

template< typename category_name, typename scalar_name >
void full
(
	color::_internal::model<category_name> & result
	,color::_internal::model<category_name> const& left
	,scalar_name const& scalar
	,color::_internal::model<category_name> const& right
) {
	color::operation::_internal::convex<category_name,scalar_name>::full(result, left, scalar, right);
}

}

}
}







namespace color {
namespace operation {
namespace _internal {

template< typename category_name>
struct invert {
public:
	typedef category_name category_type;


	typedef color::_internal::trait< category_type > trait_type;

	typedef typename color::_internal::model<category_type> model_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::component_input_const_type component_input_const_type;

	typedef typename trait_type::index_type index_type;
	typedef typename trait_type::index_input_const_type index_input_const_type;

	typedef typename trait_type::component_return_type component_return_type;

	static component_return_type
	component
	(
		component_input_const_type component
		,index_input_const_type index
	) {
		return trait_type::range(index) - component;
	}

	template< index_type index_size >
	static
	component_return_type
	component(component_input_const_type component) {
		return trait_type::template range<index_size>() - component;
	}

	static void accumulate(model_type &result) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, component(result.get(index), index));
		}
	}

	static void full(model_type &result, model_type const& right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, component(right.get(index), index));
		}
	}

};
}

namespace invert {

template< typename category_name >
void accumulate
(
	color::_internal::model<category_name> & result
) {
	color::operation::_internal::invert<category_name>::accumulate(result);
}

template< typename category_name >
void full
(
	color::_internal::model<category_name> & result
	,color::_internal::model<category_name> const& right
) {
	color::operation::_internal::invert<category_name>::full(result, right);
}

}

}
}





namespace color {
namespace operation {
namespace _internal {
template< typename category_name, typename scalar_name >
struct scale {
public:
	typedef category_name category_type;
	typedef scalar_name scalar_type;
	typedef scalar_type const& scalar_const_input_type;

	typedef color::_internal::trait< category_type > trait_type;

	typedef typename color::_internal::model<category_type> model_type;
	typedef model_type & model_input_type;
	typedef model_type const& model_const_input_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::index_type index_type;

	static void accumulate(model_input_type result, scalar_const_input_type const& scalar) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, result.get(index) * scalar);
		}
	}

	static void full(model_input_type result, scalar_const_input_type scalar, model_const_input_type right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, scalar * right.get(index));
		}
	}

};
}

namespace scale {

template< typename category_name, typename scalar_name >
void accumulate
(
	color::_internal::model<category_name> & result
	,scalar_name const& scalar
) {
	color::operation::_internal::scale<category_name,scalar_name>::accumulate(result, scalar);
}

template< typename category_name, typename scalar_name >
void full
(
	color::_internal::model<category_name> & result
	,scalar_name const& scalar
	,color::_internal::model<category_name> const& right
) {
	color::operation::_internal::scale<category_name,scalar_name>::full(result, scalar, right);
}

}

}
}




namespace color {
namespace operation {
namespace _internal {
template< typename category_name>
struct subtract {
public:
	typedef category_name category_type;


	typedef color::_internal::trait< category_type > trait_type;

	typedef typename color::_internal::model<category_type> model_type;

	typedef typename trait_type::component_type component_type;
	typedef typename trait_type::index_type index_type;

	static void accumulate(model_type &result, model_type const& right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, result.get(index) - right.get(index));
		}
	}

	static void full(model_type &result, model_type const& left, model_type const& right) {
		for(index_type index = 0; index < trait_type::size(); index ++) {
			result.set(index, left.get(index) - right.get(index));
		}
	}

};
}

namespace subtract {

template< typename category_name >
void accumulate
(
	color::_internal::model<category_name> & result
	,color::_internal::model<category_name> const& right
) {
	color::operation::_internal::subtract<category_name>::accumulate(result, right);
}

template< typename category_name >
void full
(
	color::_internal::model<category_name> & result
	,color::_internal::model<category_name> const& left
	,color::_internal::model<category_name> const& right
) {
	color::operation::_internal::subtract<category_name>::full(result, left, right);
}

}

}
}










namespace color {
namespace operation {
namespace compare {







template < typename category_name >
bool equal(color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right) {
	return left.container() == right.container();
}

template < typename category_name >
bool different(color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right) {
	return left.container() != right.container();
}

template < typename category_name >
bool less_strict(color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right) {
	return left.container() < right.container();
}

template < typename category_name >
bool great_strict(color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right) {
	return left.container() > right.container();
}

template < typename category_name >
bool less_or_equal(color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right) {
	return left.container() <= right.container();
}

template < typename category_name >
bool great_or_equal(color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right) {
	return left.container() >= right.container();
}


}
}
}


namespace color {
namespace operation {
namespace arithmetic {

template< typename category_name >
inline
::color::_internal::model< category_name >
operator +(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	::color::_internal::model< category_name > result;
	::color::operation::addition::full(result, left, right);
	return result;
}

template< typename category_name>
inline
::color::_internal::model< category_name > &
operator +=(::color::_internal::model< category_name > & result, ::color::_internal::model< category_name > const& right) {
	::color::operation::addition::accumulate(result, right);
	return result;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
operator -(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	::color::_internal::model< category_name > result;
	::color::operation::subtract::full(result, left, right);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::_internal::model< category_name >
operator *
(
	scalar_name const& left
	,::color::_internal::model< category_name > const& right
) {
	::color::_internal::model< category_name > result;
	::color::operation::scale::full(result, left, right);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::_internal::model< category_name >
operator *
(
	::color::_internal::model< category_name > const & left
	,scalar_name const & right
) {
	::color::_internal::model< category_name > result;
	::color::operation::scale::full(result, right, left);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::_internal::model< category_name >
operator /
(
	::color::_internal::model< category_name > const & left
	,scalar_name const & right
) {
	::color::_internal::model< category_name > result;
	::color::operation::scale::full(result, scalar_name(1) / right, left);
	return result;
}


template< typename category_name, typename scalar_name >
inline
::color::_internal::model< category_name > &
operator -=(::color::_internal::model< category_name > & result, scalar_name const& left) {
	::color::operation::subtract::accumulate(result, left);
	return result;
}


template< typename category_name, typename scalar_name >
inline
::color::_internal::model< category_name > &
operator *=(::color::_internal::model< category_name > & result, scalar_name const& scalar) {
	::color::operation::scale::accumulate(result, scalar);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::_internal::model< category_name > &
operator /=(::color::_internal::model< category_name > & result, scalar_name const& scalar) {
	::color::operation::scale::accumulate(result, scalar_name(1) / scalar);
	return result;
}

}

namespace compare {
template< typename category_name, typename scalar_name >
inline
bool
operator ==(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	return ::color::operation::compare::equal(left, right);
}

template< typename category_name, typename scalar_name >
inline
bool
operator !=(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	return ::color::operation::compare::different(left, right);
}

template< typename category_name, typename scalar_name >
inline
bool
operator <(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	return ::color::operation::compare::less_strict(left, right);
}

template< typename category_name, typename scalar_name >
inline
bool
operator >(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	return ::color::operation::compare::great_strict(left, right);
}

template< typename category_name, typename scalar_name >
inline
bool
operator <=(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	return ::color::operation::compare::less_or_equal(left, right);
}

template< typename category_name, typename scalar_name >
inline
bool
operator >=(::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right) {
	return ::color::operation::compare::great_or_equal(left, right);
}

}

}
}





namespace color {
namespace make {

template< typename category_name >
inline
void
black(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
	for(index_type index=0; index < model_type::size() ; ++index) {
		color_parameter.set(index, trait_type::minimum(index));
	}
}

template< typename category_name >
inline
::color::_internal::model< category_name >
black() {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
	model_type color;
	for(index_type index=0; index < model_type::size() ; ++index) {
		color.set(index, trait_type::minimum(index));
	}
	return color;
}


}
}





namespace color {
namespace make {

template< typename category_name >
void gray50(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
	for(index_type index=0; index < model_type::size() ; ++index) {
		color_parameter.set(index, trait_type::minimum(index) + trait_type::range(index)/2);
	}
}

template< typename category_name >
inline
::color::_internal::model< category_name >
gray50() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::gray50(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void white(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
	for(index_type index=0; index < model_type::size() ; ++index) {
		color_parameter.set(index, trait_type::maximum(index));
	}
}

template< typename category_name >
inline
::color::_internal::model< category_name >
white() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::white(dummy);
	return dummy;
}

}
}






namespace color {
namespace make {

template< typename category_name >
void red(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
red() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::red(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void green(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
green() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::green(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void blue(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
blue() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::blue(dummy);
	return dummy;
}

}
}






namespace color {
namespace make {

template< typename category_name >
void cyan(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
cyan() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::cyan(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void magenta(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void yellow(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
yellow() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::yellow(dummy);
	return dummy;
}

}
}







namespace color {
namespace make {

template< typename category_name >
void aqua(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
aqua() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::aqua(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void fuchsia(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
fuchsia() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::fuchsia(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void lime(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
lime() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::lime(dummy);
	return dummy;
}

}
}






namespace color {
namespace make {

template< typename category_name >
void maroon(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
maroon() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::maroon(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void navy(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
navy() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::navy(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void olive(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
olive() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::olive(dummy);
	return dummy;
}

}
}
namespace color {
namespace make {

template< typename category_name >
void orange(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
orange() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::orange(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void purple(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
purple() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::purple(dummy);
	return dummy;
}

}
}






namespace color {
namespace make {

template< typename category_name >
void silver(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
silver() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::silver(dummy);
	return dummy;
}

}
}





namespace color {
namespace make {

template< typename category_name >
void teal(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
teal() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::teal(dummy);
	return dummy;
}

}
}
namespace color {
namespace make {

template< typename category_name >
void violet(::color::_internal::model< category_name > & color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename model_type::index_type index_type;
}

template< typename category_name >
inline
::color::_internal::model< category_name >
violet() {
	typedef ::color::_internal::model< category_name > model_type;
	static model_type dummy;
	::color::make::violet(dummy);
	return dummy;
}

}
}








namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
yellow(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}





namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
red(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}
}
}





namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
magenta(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}





namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
green(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}





namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
cyan(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}





namespace color {
namespace get {

template< typename category_name, typename result >
inline
typename ::color::_internal::model< category_name >::component_const_type
blue(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}
}
}





namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_return_const_type
alpha(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	return trait_type::template maximum<0>();
}

}
}





namespace color {
namespace get {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
gray(::color::_internal::model< category_name > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}








namespace color {
namespace set {

template< typename category_name >
inline
void
yellow
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}





namespace color {
namespace set {

template< typename category_name >
inline
void
red
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
}
}
}





namespace color {
namespace set {

template< typename category_name >
inline
void
magenta
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}





namespace color {
namespace set {

template< typename category_name >
inline
void
green
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}





namespace color {
namespace set {

template< typename category_name >
inline
void
cyan
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}





namespace color {
namespace set {

template< typename category_name >
inline
void
blue
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}





namespace color {
namespace set {

template< typename category_name >
inline
void
alpha
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}





namespace color {
namespace set {


template< typename category_name, typename float_name = double >
inline
void
gray
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
};

}
}











namespace color {
namespace category {
class cmy_uint8 {};
class cmy_uint16 {};
class cmy_uint32 {};
class cmy_uint64 {};
class cmy_float {};
class cmy_double {};
class cmy_ldouble {};
}
}
















namespace color {
namespace _internal {
namespace utility {
namespace type {

template < typename type_name >
struct traitP {
public:
	typedef type_name instance_type;

	typedef instance_type const const_type;

	typedef instance_type const return_const_type;
	typedef instance_type return_type;


	typedef instance_type const& input_const_type;
	typedef instance_type input_type;

};

}
}
}
}



namespace color {
namespace _internal {
namespace utility {
namespace bound {

template< typename index_name >
struct bound332 {
public:
	typedef std::uint8_t unsigned_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitP< unsigned_type > trait_type;
	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename trait_type::instance_type instance_type;
	typedef typename trait_type::return_const_type return_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	template< index_instance_type index >
	static return_const_type maximum() {
		static instance_type max_list[] = { 7, 7, 3 };
		return max_list[index];
	}

	static return_const_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 7, 7, 3 };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_const_type minimum() {
		static instance_type value=0;
		return value;
	}

	static return_const_type minimum(index_input_const_type index) {
		static instance_type value=0;
		return value;
	}

	template< index_instance_type index >
	static return_const_type range() {
		static instance_type max_list[] = { 7, 7, 3 };
		return max_list[index];
	}

	static return_const_type range(index_input_const_type index) {
		static instance_type max_list[] = { 7, 7, 3 };
		return max_list[index];
	}
};

}
}
}
}











namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename unsigned_name, typename index_name >
struct Unsigned {
public:
	typedef unsigned_name unsigned_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitP< unsigned_type > utility_trait_type;

	typedef typename utility_trait_type::instance_type instance_type;
	typedef typename utility_trait_type::const_type const_type;
	typedef typename utility_trait_type::return_const_type return_const_type;
	typedef typename utility_trait_type::return_type return_type;
	typedef typename utility_trait_type::input_const_type input_const_type;
	typedef typename utility_trait_type::input_type input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
};

}
}
}
}


namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename index_name >
struct cnent332
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name > {
};

}
}
}
}






namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename index_name >
struct cner332 {
public:

	typedef index_name index_type;

	typedef std::uint8_t value_type;
	typedef std::uint8_t instance_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_const_type;
	typedef instance_type & return_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitP< value_type > component_trait_type;

	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef void set_return_type;

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		switch(index) {
		case(0):
			return ((container >> 0) & 7);
		case(1):
			return ((container >> 3) & 7);
		case(2):
			return ((container >> 5) & 3);
		}
		return 0;
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		switch(index) {
		case(0):
			return ((container >> 0) & 7);
		case(1):
			return ((container >> 3) & 7);
		case(2):
			return ((container >> 6) & 3);
		}
		return 0;
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		switch(index) {
		case(0) :
			container = (container & ~(7 << (0))) | (((instance_type)value) << (0));
			break;
		case(1) :
			container = (container & ~(7 << (3))) | (((instance_type)value) << (3));
			break;
		case(2) :
			container = (container & ~(3 << (6))) | (((instance_type)value) << (6));
			break;
		}
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		switch(index) {
		case(0) :
			container = (container & ~(7 << (0))) | (((instance_type)value) << (0));
			break;
		case(1) :
			container = (container & ~(7 << (3))) | (((instance_type)value) << (3));
			break;
		case(2) :
			container = (container & ~(3 << (6))) | (((instance_type)value) << (6));
			break;
		}
	}

	static index_return_image_type size() {
		static index_instance_type local_length = 3;
		return local_length;
	}
};
}
}
}
}



namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmy_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::cmy_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::cmy_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}



namespace color {
namespace _internal {
namespace utility {
namespace bound {

template< typename index_name >
struct bound556 {
public:
	typedef std::uint16_t unsigned_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitP< unsigned_type > trait_type;
	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename trait_type::instance_type instance_type;
	typedef typename trait_type::return_const_type return_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	template< index_instance_type index >
	static return_const_type maximum() {
		static instance_type max_list[] = { 31, 31, 63 };
		return max_list[index];
	}

	static return_const_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 31, 31, 63 };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_const_type minimum() {
		static instance_type value=0;
		return value;
	}

	static return_const_type minimum(index_input_const_type index) {
		static instance_type value=0;
		return value;
	}

	template< index_instance_type index >
	static return_const_type range() {
		static instance_type max_list[] = { 31, 31, 63 };
		return max_list[index];
	}

	static return_const_type range(index_input_const_type index) {
		static instance_type max_list[] = { 31, 31, 63 };
		return max_list[index];
	}
};

}
}
}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename index_name >
struct cnent556
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, index_name > {
};

}
}
}
}
namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename index_name >
struct cner556 {
public:

	typedef index_name index_type;

	typedef std::uint8_t value_type;
	typedef std::uint16_t instance_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_const_type;
	typedef instance_type & return_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitP< value_type > component_trait_type;

	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef void set_return_type;

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		switch(index) {
		case(0):
			return ((container >> 0) & 31);
		case(1):
			return ((container >> 5) & 31);
		case(2):
			return ((container >> 10) & 63);
		}
		return 0;
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		switch(index) {
		case(0):
			return ((container >> 0) & 31);
		case(1):
			return ((container >> 5) & 31);
		case(2):
			return ((container >> 10) & 63);
		}
		return 0;
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		switch(index) {
		case(0) :
			container = (container & ~(31 << (0))) | (((instance_type)value) << (0));
			break;
		case(1) :
			container = (container & ~(31 << (5))) | (((instance_type)value) << (5));
			break;
		case(2) :
			container = (container & ~(63 << (10))) | (((instance_type)value) << (10));
			break;
		}
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		switch(index) {
		case(0) :
			container = (container & ~(31 << (0))) | (((instance_type)value) << (0));
			break;
		case(1) :
			container = (container & ~(31 << (5))) | (((instance_type)value) << (5));
			break;
		case(2) :
			container = (container & ~(63 << (10))) | (((instance_type)value) << (10));
			break;
		}
	}

	static index_return_image_type size() {
		static index_instance_type local_length = 3;
		return local_length;
	}
};
}
}
}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmy_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::cmy_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::cmy_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}












namespace color {
namespace _internal {
namespace utility {
namespace bound {

template< typename container_name, unsigned width_size, typename index_name >
struct intrinsic {
public:
	typedef container_name container_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitC< container_type > component_trait_type;
	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	typedef ::color::_internal::utility::bound::intrinsic< container_name, width_size, index_name > this_type;


	template< index_instance_type index >
	static component_return_const_type maximum() {
		static const component_instance_type component = (((container_type(1) << (width_size-1)) - container_name(1)) << 1) + container_type(1);
		return component;
	}

	static component_return_const_type maximum(index_input_const_type index) {
		static const component_instance_type component = (((container_type(1) << (width_size-1)) - container_type(1)) << 1) + container_type(1);
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type minimum() {
		static const component_instance_type component = 0;
		return component;
	}

	static component_return_const_type minimum(index_input_const_type index) {
		static const component_instance_type component = 0;
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type range() {
		static const component_instance_type component = this_type::template maximum<index>() - this_type::template minimum<index>();
		return component;
	}

	static component_return_const_type range(index_input_const_type index) {
		static const component_instance_type component = this_type::maximum(index) - this_type::minimum(index);
		return component;
	}
};

}
}
}
}

namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename unsigned_name, typename value_name, typename index_name, unsigned length, unsigned width >
struct Unsigned {
public:

	typedef unsigned_name unsigned_type;
	typedef value_name value_type;
	typedef index_name index_type;
	typedef unsigned_name instance_type;

	typedef color::_internal::utility::container::Unsigned<unsigned_name,value_name,index_name,length,width> this_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_const_type;
	typedef instance_type & return_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitP< value_name > component_trait_type;

	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef void set_return_type;

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return (component_type)((container >> (index * width)) & mask());
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return (component_type)((container >> (index * width)) & mask());
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container = (container & ~(this_type::mask() << (index * width))) | ((instance_type(value) << (index * width)));
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container = (container & ~(this_type::mask() << (index * width))) | ((instance_type(value)) << (index * width));
	}

	static index_return_image_type size() {
		static index_instance_type local_length = length;
		return local_length;
	}
private:
	static return_const_type mask() {
		static instance_type local_mask = (((instance_type(1) << (width-1)) - instance_type(1))<< 1) + instance_type(1);
		return local_mask;
	}
};


}
}
}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmy_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::cmy_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::cmy_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmy_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::cmy_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::cmy_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}










namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename value_name, typename index_name >
struct array {
public:
	typedef value_name value_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitC< value_name > utility_trait_type;

	typedef typename utility_trait_type::instance_type instance_type;
	typedef typename utility_trait_type::const_type const_type;
	typedef typename utility_trait_type::return_const_type return_const_type;
	typedef typename utility_trait_type::return_type return_type;
	typedef typename utility_trait_type::input_const_type input_const_type;
	typedef typename utility_trait_type::input_type input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
};

}
}
}
}





namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename value_name, unsigned length >
struct array {
public:

	typedef value_name value_type;

	typedef std::array< value_name, length> instance_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_const_type;
	typedef instance_type & return_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::utility::type::index< typename instance_type::size_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::const_type index_const_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitC< value_name > component_trait_type;

	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;


	typedef void set_return_type;

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return container[index];
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return container[index];
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container[index] = value;
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container[index] = value;
	}

	static index_return_image_type size() {
		static index_instance_type local_length = length;
		return local_length;
	}
};
}
}
}
}






namespace color {
namespace _internal {

template< >
struct index< ::color::category::cmy_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::cmy_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct index< ::color::category::cmy_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_double >
		: public ::color::_internal::utility::component::array< double, unsigned> {
};

template< >
struct container< ::color::category::cmy_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct index< ::color::category::cmy_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmy_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::cmy_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}











namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
red(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return (trait_type::template range<0>() - (color_parameter.template get<0>() - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
red(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
red(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
red(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
red(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
red(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
red(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
red(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::red<color::category::cmy_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
green(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return (trait_type::template range<1>() - (color_parameter.template get<1>() - trait_type::template minimum<1>())) + trait_type::template minimum<1>();
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
green(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
green(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
green(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
green(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
green(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
green(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
green(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::green<color::category::cmy_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
blue(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return (trait_type::template range<2>() - (color_parameter.template get<2>() - trait_type::template minimum<2>())) + trait_type::template minimum<2>();
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
blue(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
blue(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
blue(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
blue(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
blue(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
blue(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
blue(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::blue<color::category::cmy_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
gray(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		(1-0.2126) * (color_parameter.template get<0>() - trait_type::template minimum<0>()) / trait_type::template range<0>()
	+ (1-0.7152) * (color_parameter.template get<1>() - trait_type::template minimum<1>()) / trait_type::template range<1>()
	+ (1-0.0722) * (color_parameter.template get<2>() - trait_type::template minimum<2>()) / trait_type::template range<2>();
	return component_type(value * trait_type::template range<0>() + trait_type::template minimum<0>());
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
gray(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
gray(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
gray(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
gray(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
gray(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
gray(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
gray(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::gray<color::category::cmy_ldouble>(color_parameter);
};


}
}








namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
yellow(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<1>();
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
yellow(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
yellow(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
yellow(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
yellow(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
yellow(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
yellow(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
yellow(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::yellow<color::category::cmy_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
magenta(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<2>();
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
magenta(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
magenta(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
magenta(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
magenta(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
magenta(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
magenta(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
magenta(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::magenta<color::category::cmy_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
cyan(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<0>();
}

}
}
}

inline
::color::_internal::model< color::category::cmy_uint8 >::component_const_type
cyan(::color::_internal::model< color::category::cmy_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmy_uint16 >::component_const_type
cyan(::color::_internal::model< color::category::cmy_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint32 >::component_const_type
cyan(::color::_internal::model< color::category::cmy_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_uint64 >::component_const_type
cyan(::color::_internal::model< color::category::cmy_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_float >::component_const_type
cyan(::color::_internal::model< color::category::cmy_float > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_double >::component_const_type
cyan(::color::_internal::model< color::category::cmy_double > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmy_ldouble >::component_const_type
cyan(::color::_internal::model< color::category::cmy_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmy::_internal::cyan<color::category::cmy_ldouble>(color_parameter);
};


}
}








namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
void
yellow
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<1>(component_parameter);
}

}
}
}

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::yellow<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
void
red
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<0>() - (component_parameter - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
	color_parameter.template set<0>(new_component);
}

}
}
}

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::red<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
void
magenta
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<2>(component_parameter);
}

}
}
}

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
void
green
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<1>() - (component_parameter - trait_type::template minimum<1>())) + trait_type::template minimum<1>();
	color_parameter.template set<1>(new_component);
}

}
}
}

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::green<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
void
cyan
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::cyan<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name >
inline
void
blue
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<2>() - (component_parameter - trait_type::template minimum<2>())) + trait_type::template minimum<2>();
	color_parameter.template set<2>(new_component);
}

}
}
}

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::blue<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}







namespace color {
namespace set {
namespace _internal {
namespace cmy {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
void
gray
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		0.2126 * (float_name(1) - (color_parameter.template get<0>() - trait_type::template minimum<0>()) / trait_type::template range<0>())
		+ 0.7152 * (float_name(1) - (color_parameter.template get<1>() - trait_type::template minimum<1>()) / trait_type::template range<1>())
		+ 0.0722 * (float_name(1) - (color_parameter.template get<2>() - trait_type::template minimum<2>()) / trait_type::template range<2>());
	value = float_name(component_parameter - trait_type::template minimum<0>()) / trait_type::template range<0>() / value;
	::color::operation::scale::accumulate(color_parameter, value);
}

}
}
}

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint8>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint16>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint32>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_uint64>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_float > & color_parameter,
	::color::_internal::model< ::color::category::cmy_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_float>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_double > & color_parameter,
	::color::_internal::model< ::color::category::cmy_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_double>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmy_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmy::_internal::gray<::color::category::cmy_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xff;
}

inline
void black(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xffff;
}

inline
void black(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffffffu;
}

inline
void black(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xfffffffffffffffful;
}

inline
void black(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 1, 1 });
}

inline
void black(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 1, 1 });
}

inline
void black(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x5b;
}

inline
void gray50(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x7def;
}

inline
void gray50(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7f7f7fu;
}

inline
void gray50(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fff7fff7ffful;
}

inline
void gray50(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0.5, 0.5 });
}

inline
void gray50(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0.5, 0.5 });
}

inline
void gray50(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0.5, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void white(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void white(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff000000u;
}

inline
void white(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000000000ul;
}

inline
void white(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0 });
}

inline
void white(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0 });
}

inline
void white(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0 });
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xf8;
}

inline
void red(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xffe0;
}

inline
void red(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff00u;
}

inline
void red(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff0000ul;
}

inline
void red(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 1 });
}

inline
void red(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 1 });
}

inline
void red(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xc7;
}

inline
void green(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xfc1f;
}

inline
void green(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff00ffu;
}

inline
void green(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff0000fffful;
}

inline
void green(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 1 });
}

inline
void green(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 1 });
}

inline
void green(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 1 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x3f;
}

inline
void blue(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x3ff;
}

inline
void blue(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ffffu;
}

inline
void blue(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff0000fffffffful;
}

inline
void blue(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 1, 0 });
}

inline
void blue(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 1, 0 });
}

inline
void blue(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 1, 0 });
}

}
}






namespace color {
namespace make {

inline
void cyan(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x7;
}

inline
void cyan(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x1f;
}

inline
void cyan(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ffu;
}

inline
void cyan(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff00000000fffful;
}

inline
void cyan(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 0 });
}

inline
void cyan(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 0 });
}

inline
void cyan(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void magenta(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void magenta(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x3e0;
}

inline
void magenta(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00u;
}

inline
void magenta(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff0000ffff0000ul;
}

inline
void magenta(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0 });
}

inline
void magenta(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0 });
}

inline
void magenta(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0 });
}

}
}





namespace color {
namespace make {

inline
void yellow(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xc0;
}

inline
void yellow(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xfc00;
}

inline
void yellow(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000u;
}

inline
void yellow(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff00000000ul;
}

inline
void yellow(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 1 });
}

inline
void yellow(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 1 });
}

inline
void yellow(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 1 });
}

}
}






namespace color {
namespace make {

inline
void aqua(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x7;
}

inline
void aqua(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x1f;
}

inline
void aqua(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ffu;
}

inline
void aqua(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff00000000fffful;
}

inline
void aqua(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 0 });
}

inline
void aqua(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 0 });
}

inline
void aqua(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void fuchsia(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void fuchsia(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x3e0;
}

inline
void fuchsia(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00u;
}

inline
void fuchsia(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff0000ffff0000ul;
}

inline
void fuchsia(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0 });
}

inline
void fuchsia(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0 });
}

inline
void fuchsia(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0 });
}

}
}





namespace color {
namespace make {

inline
void lime(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xc7;
}

inline
void lime(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xfc1f;
}

inline
void lime(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff00ffu;
}

inline
void lime(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff0000fffful;
}

inline
void lime(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 1 });
}

inline
void lime(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 1 });
}

inline
void lime(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 1 });
}

}
}






namespace color {
namespace make {

inline
void maroon(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xfb;
}

inline
void maroon(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xffef;
}

inline
void maroon(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff7fu;
}

inline
void maroon(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff7ffful;
}

inline
void maroon(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 1 });
}

inline
void maroon(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 1 });
}

inline
void maroon(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void navy(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x7f;
}

inline
void navy(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fff;
}

inline
void navy(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fffffu;
}

inline
void navy(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7ffffffffffful;
}

inline
void navy(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 1, 0.5 });
}

inline
void navy(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 1, 0.5 });
}

inline
void navy(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void olive(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xdb;
}

inline
void olive(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xfdef;
}

inline
void olive(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff7f7fu;
}

inline
void olive(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff7fff7ffful;
}

inline
void olive(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0.5, 1 });
}

inline
void olive(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0.5, 1 });
}

inline
void olive(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0.5, 1 });
}

}
}





namespace color {
namespace make {

inline
void orange(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0xd0;
}

inline
void orange(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0xfd40;
}

inline
void orange(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff5900u;
}

inline
void orange(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff59990000ul;
}

inline
void orange(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0.35, 1 });
}

inline
void orange(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0.35, 1 });
}

inline
void orange(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0.35, 1 });
}

}
}





namespace color {
namespace make {

inline
void purple(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x7b;
}

inline
void purple(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fef;
}

inline
void purple(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff7fu;
}

inline
void purple(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff7ffful;
}

inline
void purple(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 0.5 });
}

inline
void purple(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 0.5 });
}

inline
void purple(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 0.5 });
}

}
}






namespace color {
namespace make {

inline
void silver(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x9;
}

inline
void silver(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x3ce7;
}

inline
void silver(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff3f3f3fu;
}

inline
void silver(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff3fff3fff3ffful;
}

inline
void silver(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.25, 0.25, 0.25 });
}

inline
void silver(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.25, 0.25, 0.25 });
}

inline
void silver(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.25, 0.25, 0.25 });
}

}
}





namespace color {
namespace make {

inline
void teal(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x5f;
}

inline
void teal(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x7dff;
}

inline
void teal(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7f7fffu;
}

inline
void teal(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fff7ffffffful;
}

inline
void teal(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0.5, 0.5 });
}

inline
void teal(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0.5, 0.5 });
}

inline
void teal(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0.5, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void violet(::color::_internal::model< color::category::cmy_uint8 > & color_parameter) {
	color_parameter.container() = 0x18;
}

inline
void violet(::color::_internal::model< color::category::cmy_uint16 > & color_parameter) {
	color_parameter.container() = 0x11e2;
}

inline
void violet(::color::_internal::model< color::category::cmy_uint32 > & color_parameter) {
	color_parameter.container() = 0xff107d10u;
}

inline
void violet(::color::_internal::model< color::category::cmy_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff11107d7d1110ul;
}

inline
void violet(::color::_internal::model< color::category::cmy_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.0666667, 0.490196, 0.0666667 });
}

inline
void violet(::color::_internal::model< color::category::cmy_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.0666667, 0.490196, 0.0666667 });
}

inline
void violet(::color::_internal::model< color::category::cmy_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.0666667, 0.490196, 0.0666667 });
}

}
}












namespace color {
namespace category {
class cmyk_uint8 {};
class cmyk_uint16 {};
class cmyk_uint32 {};
class cmyk_uint64 {};
class cmyk_float {};
class cmyk_double {};
class cmyk_ldouble {};
}
}










namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 4, unsigned > {
};

template< >
struct index< ::color::category::cmyk_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint8_t, unsigned, 4, 4 > {
};

}
}





namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 4, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 4, 16 > {
};

}
}











namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmyk_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
};

template< >
struct index< ::color::category::cmyk_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmyk_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::cmyk_float >
		: public ::color::_internal::utility::container::array< float, 4 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmyk_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
};

template< >
struct index< ::color::category::cmyk_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmyk_double >
		: public ::color::_internal::utility::component::array< double, unsigned> {
};

template< >
struct container< ::color::category::cmyk_double >
		: public ::color::_internal::utility::container::array< double, 4 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct bound< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

template< >
struct index< ::color::category::cmyk_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::container::array< long double, 4 > {
};

}
}











namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
red(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return (trait_type::template range<0>() - (color_parameter.template get<0>() - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
red(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
red(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
red(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
red(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
red(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
red(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
red(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::red<color::category::cmyk_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
green(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return (trait_type::template range<1>() - (color_parameter.template get<1>() - trait_type::template minimum<1>())) + trait_type::template minimum<1>();
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
green(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
green(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
green(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
green(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
green(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
green(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
green(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
blue(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return (trait_type::template range<2>() - (color_parameter.template get<2>() - trait_type::template minimum<2>())) + trait_type::template minimum<2>();
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
blue(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
blue(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
blue(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
blue(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
blue(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
blue(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
blue(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::blue<color::category::cmyk_ldouble>(color_parameter);
};


}
}








namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
gray(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		(1-0.2126) * (color_parameter.template get<0>() - trait_type::template minimum<0>()) / trait_type::template range<0>()
	+ (1-0.7152) * (color_parameter.template get<1>() - trait_type::template minimum<1>()) / trait_type::template range<1>()
	+ (1-0.0722) * (color_parameter.template get<2>() - trait_type::template minimum<2>()) / trait_type::template range<2>();
	return component_type(value * trait_type::template range<0>() + trait_type::template minimum<0>());
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
gray(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
gray(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
gray(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
gray(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
gray(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
gray(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
gray(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::gray<color::category::cmyk_ldouble>(color_parameter);
};


}
}








namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
yellow(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<1>();
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
yellow(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
magenta(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<2>();
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
magenta(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
cyan(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<0>();
}

}
}
}

inline
::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_float >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_float > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_float>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_double >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_double > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_double>(color_parameter);
};

inline
::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
cyan(::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter) {
	return ::color::get::_internal::cmyk::_internal::cyan<color::category::cmyk_ldouble>(color_parameter);
};


}
}








namespace color {
namespace set {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
void
red
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<0>() - (component_parameter - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
	color_parameter.template set<0>(new_component);
}

}
}
}

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint8>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint16>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint32>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_uint64>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_float > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_float>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_double > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_double>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::cmyk_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::red<::color::category::cmyk_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
void
green
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<1>() - (component_parameter - trait_type::template minimum<1>())) + trait_type::template minimum<1>();
	color_parameter.template set<1>(new_component);
}

}
}
}

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_uint8>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_uint16>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_uint32>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_uint64>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_float > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_float>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_double > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_double>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::cmyk_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::green<::color::category::cmyk_ldouble>(color_parameter, component_parameter);
};

}
}








namespace color {
namespace set {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
void
gray
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		0.2126 * (float_name(1) - (color_parameter.template get<0>() - trait_type::template minimum<0>()) / trait_type::template range<0>())
		+ 0.7152 * (float_name(1) - (color_parameter.template get<1>() - trait_type::template minimum<1>()) / trait_type::template range<1>())
		+ 0.0722 * (float_name(1) - (color_parameter.template get<2>() - trait_type::template minimum<2>()) / trait_type::template range<2>());
	value = float_name(component_parameter - trait_type::template minimum<0>()) / trait_type::template range<0>() / value;
	::color::operation::scale::accumulate(color_parameter, value);
}

}
}
}

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint8>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint16>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint32>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_uint64>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_float > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_float>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_double > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_double>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::cmyk_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::gray<::color::category::cmyk_ldouble>(color_parameter, component_parameter);
};

}
}






namespace color {
namespace set {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
void
yellow
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<1>(component_parameter);
}

}
}
}

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint8>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint16>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint32>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_uint64>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_float > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_float>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_double > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_double>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::cmyk_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::yellow<::color::category::cmyk_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
void
magenta
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<2>(component_parameter);
}

}
}
}

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_uint8>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_uint16>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_uint32>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_uint64>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_float > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_float>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_double > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_double>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::cmyk_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::magenta<::color::category::cmyk_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace cmyk {
namespace _internal {

template< typename category_name >
inline
void
cyan
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_uint8>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_uint16>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_uint32>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_uint64>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_float > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_float>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_double > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_double>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::cmyk_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::cmyk_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::cmyk::_internal::cyan<::color::category::cmyk_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::cmyk_uint8 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void black(::color::_internal::model< color::category::cmyk_uint16 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void black(::color::_internal::model< color::category::cmyk_uint32 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void black(::color::_internal::model< color::category::cmyk_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0);
}

inline
void black(::color::_internal::model< color::category::cmyk_float > & color_parameter) {
	color_parameter.container() = std::array<float,4>({0,0,0});
}

inline
void black(::color::_internal::model< color::category::cmyk_double> & color_parameter) {
	color_parameter.container() = std::array<double,4>({0,0,0});
}

inline
void black(::color::_internal::model< color::category::cmyk_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,4>({0,0,0});
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::cmyk_uint8 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void gray50(::color::_internal::model< color::category::cmyk_uint16 > & color_parameter) {
	color_parameter.container() = 0x7def;
}

inline
void gray50(::color::_internal::model< color::category::cmyk_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7f7f7f;
}

inline
void gray50(::color::_internal::model< color::category::cmyk_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0x00007fff7fff7fffu);
}

inline
void gray50(::color::_internal::model< color::category::cmyk_float > & color_parameter) {
	color_parameter.container() = std::array<float,4>({0.5,0.5,0.5});
}

inline
void gray50(::color::_internal::model< color::category::cmyk_double> & color_parameter) {
	color_parameter.container() = std::array<double,4>({0.5,0.5,0.5});
}

inline
void gray50(::color::_internal::model< color::category::cmyk_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,4>({0.5,0.5,0.5});
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::cmyk_uint8 > & color_parameter) {
	color_parameter.container() = 0x07;
}

inline
void red(::color::_internal::model< color::category::cmyk_uint16 > & color_parameter) {
	color_parameter.container() = 0x003F;
}

inline
void red(::color::_internal::model< color::category::cmyk_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ff;
}

inline
void red(::color::_internal::model< color::category::cmyk_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff00000000ffffu);
}

inline
void red(::color::_internal::model< color::category::cmyk_float > & color_parameter) {
	color_parameter.container() = std::array<float,4>({ 1, 0, 0 });
}

inline
void red(::color::_internal::model< color::category::cmyk_double> & color_parameter) {
	color_parameter.container() = std::array<double,4>({ 1, 0, 0 });
}

inline
void red(::color::_internal::model< color::category::cmyk_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,4>({ 1, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::cmyk_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void green(::color::_internal::model< color::category::cmyk_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void green(::color::_internal::model< color::category::cmyk_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00;
}

inline
void green(::color::_internal::model< color::category::cmyk_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void green(::color::_internal::model< color::category::cmyk_float > & color_parameter) {
	color_parameter.container() = std::array<float,4>({ 0, 1, 0 });
}

inline
void green(::color::_internal::model< color::category::cmyk_double> & color_parameter) {
	color_parameter.container() = std::array<double,4>({ 0, 1, 0 });
}

inline
void green(::color::_internal::model< color::category::cmyk_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,4>({ 0, 1, 0 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::cmyk_uint8 > & color_parameter) {
	color_parameter.container() = 0xC0;
}

inline
void blue(::color::_internal::model< color::category::cmyk_uint16 > & color_parameter) {
	color_parameter.container() = 0x7C00;
}

inline
void blue(::color::_internal::model< color::category::cmyk_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000;
}

inline
void blue(::color::_internal::model< color::category::cmyk_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffff00000000u);
}

inline
void blue(::color::_internal::model< color::category::cmyk_float > & color_parameter) {
	color_parameter.container() = std::array<float,4>({ 0, 0, 1 });
}

inline
void blue(::color::_internal::model< color::category::cmyk_double> & color_parameter) {
	color_parameter.container() = std::array<double,4>({ 0, 0, 1 });
}

inline
void blue(::color::_internal::model< color::category::cmyk_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,4>({ 0, 0, 1 });
}

}
}





namespace color {
namespace _internal {
namespace _privateCMYK {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_cmy2cmyk {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type cc = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type cm = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type cy = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type k = std::min({ cc, cm, cy });
		float_type c;
		float_type m;
		float_type y;
		if(float_type(1) != k) {
			c = (cc-k) / (1-k);
			m = (cm-k) / (1-k);
			y = (cy-k) / (1-k);
		} else {
			c = float_type(0);
			m = float_type(0);
			y = float_type(0);
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(c));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(m));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(y));
		container_left_trait_type::template set<3>(left, diverse_type::template process<3>(k));
	}
};

}

template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_float,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_double,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint8 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_float > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_float > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_double > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_ldouble> {};


}
}











namespace color {
namespace category {
class gray_bool {};
class gray_uint8 {};
class gray_uint16 {};
class gray_uint32 {};
class gray_uint64 {};
class gray_float {};
class gray_double {};
class gray_ldouble {};
}
}










namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename index_name >
struct boolean {
public:

	typedef index_name index_type;
	typedef bool value_type;

	typedef bool instance_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_const_type;
	typedef instance_type & return_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitC< value_type > component_trait_type;

	typedef typename component_trait_type::return_const_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;
	typedef typename component_trait_type::instance_type component_type;

	typedef void set_return_type;

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return container;
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return container;
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container = value;
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container = value;
	}

	static index_return_image_type size() {
		static index_instance_type local_length = 1;
		return local_length;
	}
};
}
}
}
}

namespace color {
namespace _internal {

template< >
struct index< ::color::category::gray_bool >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_bool >
		: public ::color::_internal::utility::component::array< bool, unsigned > {
};

template< >
struct container< ::color::category::gray_bool >
		: public ::color::_internal::utility::container::boolean< unsigned > {
};

}
}









namespace color {
namespace _internal {







template< >
struct index< ::color::category::gray_uint8 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_uint8 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::gray_uint8 >
		: public ::color::_internal::utility::container::Unsigned< std::uint8_t, std::uint8_t, unsigned, 1, 8 > {
};

}
}





namespace color {
namespace _internal {

template< >
struct bound< ::color::category::gray_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
};

template< >
struct index< ::color::category::gray_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_uint16 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::gray_uint16 >
		: public ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint16_t, unsigned, 1, 16 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct bound< ::color::category::gray_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
};

template< >
struct index< ::color::category::gray_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint32_t, unsigned> {
};

template< >
struct container< ::color::category::gray_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint32_t, unsigned, 1, 32 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::gray_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
};

template< >
struct index< ::color::category::gray_uint64 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint64_t, unsigned> {
};

template< >
struct container< ::color::category::gray_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint64_t, unsigned, 1, 64 > {
};

}
}






namespace color {
namespace _internal {

template< >
struct index< ::color::category::gray_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::gray_float >
		: public ::color::_internal::utility::container::array< float, 1 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct index< ::color::category::gray_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_double >
		: public ::color::_internal::utility::component::array< double, unsigned> {
};

template< >
struct container< ::color::category::gray_double >
		: public ::color::_internal::utility::container::array< double, 1 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct index< ::color::category::gray_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::gray_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::gray_ldouble >
		: public ::color::_internal::utility::container::array< long double, 1 > {
};

}
}









namespace color {
namespace get {

inline
::color::_internal::model< ::color::category::gray_uint8 >::component_const_type
red(::color::_internal::model< ::color::category::gray_uint8 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint16 >::component_const_type
red(::color::_internal::model< ::color::category::gray_uint16 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint32 >::component_const_type
red(::color::_internal::model< ::color::category::gray_uint32 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint64 >::component_const_type
red(::color::_internal::model< ::color::category::gray_uint64 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_float >::component_const_type
red(::color::_internal::model< ::color::category::gray_float > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_double >::component_const_type
red(::color::_internal::model< ::color::category::gray_double > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_ldouble >::component_const_type
red(::color::_internal::model< ::color::category::gray_ldouble > const& color_parameter) {
	return color_parameter.template get<0>();
};

}
}







namespace color {
namespace get {

inline
::color::_internal::model< ::color::category::gray_uint8 >::component_const_type
green(::color::_internal::model< ::color::category::gray_uint8 > const& color_parameter) {
	return color_parameter.template get<0>();
}

inline
::color::_internal::model< ::color::category::gray_uint16 >::component_const_type
green(::color::_internal::model< ::color::category::gray_uint16 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< color::category::gray_uint32 >::component_const_type
green(::color::_internal::model< color::category::gray_uint32 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint64 >::component_const_type
green(::color::_internal::model< ::color::category::gray_uint64 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_float >::component_const_type
green(::color::_internal::model< ::color::category::gray_float > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_double >::component_const_type
green(::color::_internal::model< ::color::category::gray_double > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_ldouble >::component_const_type
green(::color::_internal::model< ::color::category::gray_ldouble > const& color_parameter) {
	return color_parameter.template get<0>();
};


}
}





namespace color {
namespace get {

inline
::color::_internal::model< ::color::category::gray_uint8 >::component_const_type
blue(::color::_internal::model< ::color::category::gray_uint8 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint16 >::component_const_type
blue(::color::_internal::model< ::color::category::gray_uint16 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint32 >::component_const_type
blue(::color::_internal::model< ::color::category::gray_uint32 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_uint64 >::component_const_type
blue(::color::_internal::model< ::color::category::gray_uint64 > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_float >::component_const_type
blue(::color::_internal::model< ::color::category::gray_float > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_double >::component_const_type
blue(::color::_internal::model< ::color::category::gray_double > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< ::color::category::gray_ldouble >::component_const_type
blue(::color::_internal::model< ::color::category::gray_ldouble > const& color_parameter) {
	return color_parameter.template get<0>();
};

}
}








namespace color {
namespace get {

inline
::color::_internal::model< color::category::gray_uint8 >::component_const_type
gray(::color::_internal::model< color::category::gray_uint8 > const& color_parameter) {
	return color_parameter.template get<0>();
}

inline
::color::_internal::model< color::category::gray_uint16 >::component_const_type
gray(::color::_internal::model< color::category::gray_uint16 > const& color_parameter) {
	return color_parameter.template get<0>();
}

inline
::color::_internal::model< color::category::gray_uint32 >::component_const_type
gray(::color::_internal::model< color::category::gray_uint32 > const& color_parameter) {
	return color_parameter.template get<0>();
}

inline
::color::_internal::model< color::category::gray_uint64 >::component_const_type
gray(::color::_internal::model< color::category::gray_uint64 > const& color_parameter) {
	return color_parameter.template get<0>();
}

inline
::color::_internal::model< color::category::gray_float >::component_const_type
gray(::color::_internal::model< color::category::gray_float > const& color_parameter) {
	return color_parameter.template get<0>();
};

inline
::color::_internal::model< color::category::gray_double >::component_const_type
gray(::color::_internal::model< color::category::gray_double > const& color_parameter) {
	return color_parameter.template get<0>();
}

inline
::color::_internal::model< color::category::gray_ldouble >::component_const_type
gray(::color::_internal::model< color::category::gray_ldouble > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}








namespace color {
namespace get {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
yellow(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	return (trait_type::template range<0>() - (color_parameter.template get<0>() - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
}

}
}
}

inline
::color::_internal::model< color::category::gray_uint8 >::component_const_type
yellow(::color::_internal::model< color::category::gray_uint8 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::gray_uint16 >::component_const_type
yellow(::color::_internal::model< color::category::gray_uint16 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_uint32 >::component_const_type
yellow(::color::_internal::model< color::category::gray_uint32 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_uint64 >::component_const_type
yellow(::color::_internal::model< color::category::gray_uint64 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_float >::component_const_type
yellow(::color::_internal::model< color::category::gray_float > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_float>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_double >::component_const_type
yellow(::color::_internal::model< color::category::gray_double > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_double>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_ldouble >::component_const_type
yellow(::color::_internal::model< color::category::gray_ldouble > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::yellow<color::category::gray_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
magenta(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	return (trait_type::template range<0>() - (color_parameter.template get<0>() - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
}

}
}
}

inline
::color::_internal::model< color::category::gray_uint8 >::component_const_type
magenta(::color::_internal::model< color::category::gray_uint8 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::gray_uint16 >::component_const_type
magenta(::color::_internal::model< color::category::gray_uint16 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_uint32 >::component_const_type
magenta(::color::_internal::model< color::category::gray_uint32 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_uint64 >::component_const_type
magenta(::color::_internal::model< color::category::gray_uint64 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_float >::component_const_type
magenta(::color::_internal::model< color::category::gray_float > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_float>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_double >::component_const_type
magenta(::color::_internal::model< color::category::gray_double > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_double>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_ldouble >::component_const_type
magenta(::color::_internal::model< color::category::gray_ldouble > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::magenta<color::category::gray_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
cyan(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	return (trait_type::template range<0>() - (color_parameter.template get<0>() - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
}

}
}
}

inline
::color::_internal::model< color::category::gray_uint8 >::component_const_type
cyan(::color::_internal::model< color::category::gray_uint8 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::gray_uint16 >::component_const_type
cyan(::color::_internal::model< color::category::gray_uint16 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_uint32 >::component_const_type
cyan(::color::_internal::model< color::category::gray_uint32 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_uint64 >::component_const_type
cyan(::color::_internal::model< color::category::gray_uint64 > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_float >::component_const_type
cyan(::color::_internal::model< color::category::gray_float > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_float>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_double >::component_const_type
cyan(::color::_internal::model< color::category::gray_double > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_double>(color_parameter);
};

inline
::color::_internal::model< color::category::gray_ldouble >::component_const_type
cyan(::color::_internal::model< color::category::gray_ldouble > const& color_parameter) {
	return ::color::get::_internal::gray::_internal::cyan<color::category::gray_ldouble>(color_parameter);
};


}
}








namespace color {
namespace set {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
void
red
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
red
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_uint8>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_uint16>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_uint32>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_uint64>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_float>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_double>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::red<::color::category::gray_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
void
green
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
green
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_uint8>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_uint16>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_uint32>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_uint64>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_float>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_double>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::green<::color::category::gray_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

}
}








namespace color {
namespace set {

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
};

}
}






namespace color {
namespace set {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
void
yellow
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<0>() - (component_parameter - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
	color_parameter.template set<0>(new_component);
}

}
}
}

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_uint8>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_uint16>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_uint32>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_uint64>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_float>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_double>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::yellow<::color::category::gray_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
void
magenta
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<0>() - (component_parameter - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
	color_parameter.template set<0>(new_component);
}

}
}
}

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_uint8>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_uint16>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_uint32>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_uint64>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_float>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_double>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::magenta<::color::category::gray_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace gray {
namespace _internal {

template< typename category_name >
inline
void
cyan
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<0>() - (component_parameter - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
	color_parameter.template set<0>(new_component);
}

}
}
}

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_uint8>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_uint16>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_uint32>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_uint64>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_float > & color_parameter,
	::color::_internal::model< ::color::category::gray_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_float>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_double > & color_parameter,
	::color::_internal::model< ::color::category::gray_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_double>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::gray_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::gray::_internal::cyan<::color::category::gray_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::gray_uint8 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void black(::color::_internal::model< color::category::gray_uint16 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void black(::color::_internal::model< color::category::gray_uint32 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void black(::color::_internal::model< color::category::gray_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0);
}

inline
void black(::color::_internal::model< color::category::gray_float > & color_parameter) {
	color_parameter.container() = std::array<float,1>({0});
}

inline
void black(::color::_internal::model< color::category::gray_double> & color_parameter) {
	color_parameter.container() = std::array<double,1>({0});
}

inline
void black(::color::_internal::model< color::category::gray_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,1>({0});
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::gray_uint8 > & color_parameter) {
	color_parameter.container() = 0x7f;
}

inline
void gray50(::color::_internal::model< color::category::gray_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fff;
}

inline
void gray50(::color::_internal::model< color::category::gray_uint32 > & color_parameter) {
	color_parameter.container() = 0x7fffff;
}

inline
void gray50(::color::_internal::model< color::category::gray_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0x7fffffffffffu);
}

inline
void gray50(::color::_internal::model< color::category::gray_float > & color_parameter) {
	color_parameter.container() = std::array<float,1>({0.5});
}

inline
void gray50(::color::_internal::model< color::category::gray_double> & color_parameter) {
	color_parameter.container() = std::array<double,1>({0.5});
}

inline
void gray50(::color::_internal::model< color::category::gray_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,1>({0.5});
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::gray_uint8 > & color_parameter) {
	color_parameter.container() = 0xff;
}

inline
void white(::color::_internal::model< color::category::gray_uint16 > & color_parameter) {
	color_parameter.container() = 0xffff;
}

inline
void white(::color::_internal::model< color::category::gray_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff;
}

inline
void white(::color::_internal::model< color::category::gray_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffffffffu);
}

inline
void white(::color::_internal::model< color::category::gray_float > & color_parameter) {
	color_parameter.container() = std::array<float,1>({ 1 });
}

inline
void white(::color::_internal::model< color::category::gray_double> & color_parameter) {
	color_parameter.container() = std::array<double,1>({ 1 });
}

inline
void white(::color::_internal::model< color::category::gray_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,1>({ 1 });
}

}
}






namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::gray_uint8 > & color_parameter) {
	color_parameter.container() = 0xC0;
}

inline
void blue(::color::_internal::model< color::category::gray_uint16 > & color_parameter) {
	color_parameter.container() = 0x7C00;
}

inline
void blue(::color::_internal::model< color::category::gray_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000;
}

inline
void blue(::color::_internal::model< color::category::gray_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffff00000000u);
}

inline
void blue(::color::_internal::model< color::category::gray_float > & color_parameter) {
	color_parameter.container() = std::array<float,1>({ 0.0722 });
}

inline
void blue(::color::_internal::model< color::category::gray_double> & color_parameter) {
	color_parameter.container() = std::array<double,1>({ 0.0722 });
}

inline
void blue(::color::_internal::model< color::category::gray_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,1>({ 0.0722 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::gray_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void green(::color::_internal::model< color::category::gray_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void green(::color::_internal::model< color::category::gray_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00;
}

inline
void green(::color::_internal::model< color::category::gray_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void green(::color::_internal::model< color::category::gray_float > & color_parameter) {
	color_parameter.container() = std::array<float,1>({ 0.7152 });
}

inline
void green(::color::_internal::model< color::category::gray_double> & color_parameter) {
	color_parameter.container() = std::array<double,1>({ 0.7152 });
}

inline
void green(::color::_internal::model< color::category::gray_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,1>({ 0.7152 });
}

}
}





namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::gray_uint8 > & color_parameter) {
	color_parameter.container() = 0x07;
}

inline
void red(::color::_internal::model< color::category::gray_uint16 > & color_parameter) {
	color_parameter.container() = 0x003F;
}

inline
void red(::color::_internal::model< color::category::gray_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ff;
}

inline
void red(::color::_internal::model< color::category::gray_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff00000000ffffu);
}

inline
void red(::color::_internal::model< color::category::gray_float > & color_parameter) {
	color_parameter.container() = std::array<float,1>({ 0.2126 });
}

inline
void red(::color::_internal::model< color::category::gray_double> & color_parameter) {
	color_parameter.container() = std::array<double,1>({ 0.2126 });
}

inline
void red(::color::_internal::model< color::category::gray_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,1>({ 0.2126 });
}

}
}





namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_cmy2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::diverse< category_left_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type > normalize_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_name value =
			0.2126 * (1 - normalize_type::template process<0> (container_right_trait_type::template get<0>(right)))
			+ 0.7152 * (1 - normalize_type::template process<1> (container_right_trait_type::template get<1>(right)))
			+ 0.0722 * (1 - normalize_type::template process<2> (container_right_trait_type::template get<2>(right)));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(value));
	}
};
}

template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_float,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_double,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint8 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_float > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_cmyk2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::diverse< category_left_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type > normalize_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type c = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type m = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type y = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type k = normalize_type::template process<3>(container_right_trait_type::template get<3>(right));
		float_name value = (0.2126 * (1-c) + 0.7152 * (1-m) + 0.0722 * (1-y)) * (1-k);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(value));
	}
};
}

template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint8,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint16,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint32,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_uint64,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_float,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_float,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_float,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_double,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_double,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_double,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_uint8 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_uint16 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_uint32 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_uint64 > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_float > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_double > : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::cmyk_ldouble> : public ::color::_internal::_privateGray::convert_cmyk2gray<::color::category::gray_ldouble,::color::category::cmyk_ldouble> {};


}
}













namespace color {
namespace category {
class hsl_uint8 {};
class hsl_uint16 {};
class hsl_uint32 {};
class hsl_uint64 {};
class hsl_float {};
class hsl_double {};
class hsl_ldouble {};
}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}












namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::hsl_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}




namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}





namespace color {
namespace _internal {

template< >
struct index< ::color::category::hsl_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::hsl_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct index< ::color::category::hsl_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_double >
		: public ::color::_internal::utility::component::array< double, unsigned> {
};

template< >
struct container< ::color::category::hsl_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct index< ::color::category::hsl_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsl_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::hsl_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}











namespace color {
namespace get {
namespace _internal {
namespace hsl {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
gray(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	return color_parameter.template get<0>();
}

}
}
}

inline
::color::_internal::model< color::category::hsl_uint8 >::component_const_type
gray(::color::_internal::model< color::category::hsl_uint8 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_uint16 >::component_const_type
gray(::color::_internal::model< color::category::hsl_uint16 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint16>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_uint32 >::component_const_type
gray(::color::_internal::model< color::category::hsl_uint32 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint32>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_uint64 >::component_const_type
gray(::color::_internal::model< color::category::hsl_uint64 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint64>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_float >::component_const_type
gray(::color::_internal::model< color::category::hsl_float > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_float>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_double >::component_const_type
gray(::color::_internal::model< color::category::hsl_double > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_double>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_ldouble >::component_const_type
gray(::color::_internal::model< color::category::hsl_ldouble > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_ldouble>(color_parameter);
}


}
}








namespace color {
namespace get {
namespace _internal {
namespace hsl {
namespace _internal {

template< typename category_name >
inline
typename ::color::_internal::model< category_name >::component_const_type
hue(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	return color_parameter.template get<0>();
}

}
}
}

inline
::color::_internal::model< color::category::hsl_uint8 >::component_const_type
hue(::color::_internal::model< color::category::hsl_uint8 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_uint16 >::component_const_type
hue(::color::_internal::model< color::category::hsl_uint16 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_uint16>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_uint32 >::component_const_type
hue(::color::_internal::model< color::category::hsl_uint32 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_uint32>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_uint64 >::component_const_type
hue(::color::_internal::model< color::category::hsl_uint64 > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_uint64>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_float >::component_const_type
hue(::color::_internal::model< color::category::hsl_float > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_float>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_double >::component_const_type
hue(::color::_internal::model< color::category::hsl_double > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_double>(color_parameter);
}

inline
::color::_internal::model< color::category::hsl_ldouble >::component_const_type
hue(::color::_internal::model< color::category::hsl_ldouble > const& color_parameter) {
	return ::color::get::_internal::hsl::_internal::hue<color::category::hsl_ldouble>(color_parameter);
}


}
}








namespace color {
namespace set {
namespace _internal {
namespace hsl {
namespace _internal {

template< typename category_name >
inline
void
red
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint8>(color_parameter, component_parameter);
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint16>(color_parameter, component_parameter);
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint32>(color_parameter, component_parameter);
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_uint64>(color_parameter, component_parameter);
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_float > & color_parameter,
	::color::_internal::model< ::color::category::hsl_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_float>(color_parameter, component_parameter);
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_double > & color_parameter,
	::color::_internal::model< ::color::category::hsl_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_double>(color_parameter, component_parameter);
}

inline
void
red
(
	::color::_internal::model< ::color::category::hsl_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::hsl_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::red<::color::category::hsl_ldouble>(color_parameter, component_parameter);
}

}
}








namespace color {
namespace set {
namespace _internal {
namespace hsl {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
void
gray
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_uint8>(color_parameter, component_parameter);
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_uint16>(color_parameter, component_parameter);
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_uint32>(color_parameter, component_parameter);
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::hsl_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_uint64>(color_parameter, component_parameter);
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_float > & color_parameter,
	::color::_internal::model< ::color::category::hsl_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_float>(color_parameter, component_parameter);
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_double > & color_parameter,
	::color::_internal::model< ::color::category::hsl_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_double>(color_parameter, component_parameter);
}

inline
void
gray
(
	::color::_internal::model< ::color::category::hsl_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::hsl_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::hsl::_internal::gray<::color::category::hsl_ldouble>(color_parameter, component_parameter);
}

}
}





namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff000000u;
}

inline
void black(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000000000ul;
}

inline
void black(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x40;
}

inline
void gray50(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7c00;
}

inline
void gray50(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7f0000u;
}

inline
void gray50(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fff00000000ul;
}

inline
void gray50(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0.5 });
}

inline
void gray50(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0.5 });
}

inline
void gray50(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0xc0;
}

inline
void white(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0xfc00;
}

inline
void white(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000u;
}

inline
void white(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff00000000ul;
}

inline
void white(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 1 });
}

inline
void white(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 1 });
}

inline
void white(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 1 });
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x78;
}

inline
void red(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fe0;
}

inline
void red(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff00u;
}

inline
void red(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff0000ul;
}

inline
void red(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0.5 });
}

inline
void red(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0.5 });
}

inline
void red(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7a;
}

inline
void green(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fea;
}

inline
void green(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff55u;
}

inline
void green(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff5555ul;
}

inline
void green(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.333333, 1, 0.5 });
}

inline
void green(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.333333, 1, 0.5 });
}

inline
void green(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.333333, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7c;
}

inline
void blue(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7ff4;
}

inline
void blue(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fffaau;
}

inline
void blue(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffffaaaaul;
}

inline
void blue(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.666667, 1, 0.5 });
}

inline
void blue(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.666667, 1, 0.5 });
}

inline
void blue(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.666667, 1, 0.5 });
}

}
}






namespace color {
namespace make {

inline
void cyan(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7b;
}

inline
void cyan(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fef;
}

inline
void cyan(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff7fu;
}

inline
void cyan(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff7ffful;
}

inline
void cyan(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 0.5 });
}

inline
void cyan(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 0.5 });
}

inline
void cyan(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void magenta(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7d;
}

inline
void magenta(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7ff9;
}

inline
void magenta(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fffd4u;
}

inline
void magenta(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffffd554ul;
}

inline
void magenta(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 1, 0.5 });
}

inline
void magenta(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 1, 0.5 });
}

inline
void magenta(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void yellow(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x79;
}

inline
void yellow(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fe5;
}

inline
void yellow(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff2au;
}

inline
void yellow(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff2aaaul;
}

inline
void yellow(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.166667, 1, 0.5 });
}

inline
void yellow(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.166667, 1, 0.5 });
}

inline
void yellow(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.166667, 1, 0.5 });
}

}
}






namespace color {
namespace make {

inline
void aqua(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7b;
}

inline
void aqua(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fef;
}

inline
void aqua(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff7fu;
}

inline
void aqua(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff7ffful;
}

inline
void aqua(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 0.5 });
}

inline
void aqua(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 0.5 });
}

inline
void aqua(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void fuchsia(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7d;
}

inline
void fuchsia(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7ff9;
}

inline
void fuchsia(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fffd4u;
}

inline
void fuchsia(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffffd554ul;
}

inline
void fuchsia(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 1, 0.5 });
}

inline
void fuchsia(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 1, 0.5 });
}

inline
void fuchsia(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void lime(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x7a;
}

inline
void lime(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fea;
}

inline
void lime(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff55u;
}

inline
void lime(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff5555ul;
}

inline
void lime(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.333333, 1, 0.5 });
}

inline
void lime(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.333333, 1, 0.5 });
}

inline
void lime(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.333333, 1, 0.5 });
}

}
}






namespace color {
namespace make {

inline
void maroon(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void maroon(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x3fe0;
}

inline
void maroon(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff3fff00u;
}

inline
void maroon(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff3fffffff0000ul;
}

inline
void maroon(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0.25 });
}

inline
void maroon(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0.25 });
}

inline
void maroon(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0.25 });
}

}
}





namespace color {
namespace make {

inline
void navy(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x3c;
}

inline
void navy(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x3ff4;
}

inline
void navy(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff3fffaau;
}

inline
void navy(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff3fffffffaaaaul;
}

inline
void navy(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.666667, 1, 0.25 });
}

inline
void navy(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.666667, 1, 0.25 });
}

inline
void navy(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.666667, 1, 0.25 });
}

}
}





namespace color {
namespace make {

inline
void olive(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x39;
}

inline
void olive(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x3fe5;
}

inline
void olive(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff3fff2au;
}

inline
void olive(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff3fffffff2aaaul;
}

inline
void olive(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.166667, 1, 0.25 });
}

inline
void olive(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.166667, 1, 0.25 });
}

inline
void olive(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.166667, 1, 0.25 });
}

}
}





namespace color {
namespace make {

inline
void orange(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x78;
}

inline
void orange(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fe3;
}

inline
void orange(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff1bu;
}

inline
void orange(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff1bbbul;
}

inline
void orange(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.108333, 1, 0.5 });
}

inline
void orange(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.108333, 1, 0.5 });
}

inline
void orange(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.108333, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void purple(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x3d;
}

inline
void purple(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x3ff9;
}

inline
void purple(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff3fffd4u;
}

inline
void purple(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff3fffffffd554ul;
}

inline
void purple(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 1, 0.25 });
}

inline
void purple(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 1, 0.25 });
}

inline
void purple(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 1, 0.25 });
}

}
}






namespace color {
namespace make {

inline
void silver(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x80;
}

inline
void silver(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0xbc00;
}

inline
void silver(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xffbf0000u;
}

inline
void silver(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffbfff00000000ul;
}

inline
void silver(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0.75 });
}

inline
void silver(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0.75 });
}

inline
void silver(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0.75 });
}

}
}





namespace color {
namespace make {

inline
void teal(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0x3b;
}

inline
void teal(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0x3fef;
}

inline
void teal(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xff3fff7fu;
}

inline
void teal(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff3fffffff7ffful;
}

inline
void teal(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 0.25 });
}

inline
void teal(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 0.25 });
}

inline
void teal(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 0.25 });
}

}
}





namespace color {
namespace make {

inline
void violet(::color::_internal::model< color::category::hsl_uint8 > & color_parameter) {
	color_parameter.container() = 0xad;
}

inline
void violet(::color::_internal::model< color::category::hsl_uint16 > & color_parameter) {
	color_parameter.container() = 0xb6f9;
}

inline
void violet(::color::_internal::model< color::category::hsl_uint32 > & color_parameter) {
	color_parameter.container() = 0xffb8c1d4u;
}

inline
void violet(::color::_internal::model< color::category::hsl_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffb8b8c2b3d554ul;
}

inline
void violet(::color::_internal::model< color::category::hsl_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 0.760563, 0.721569 });
}

inline
void violet(::color::_internal::model< color::category::hsl_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 0.760563, 0.721569 });
}

inline
void violet(::color::_internal::model< color::category::hsl_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 0.760563, 0.721569 });
}

}
}





namespace color {
namespace _internal {
namespace _privateHSL {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2hsl {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::bound<category_left_type> bound_left_trait_type;
	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, bound_left_trait_type::template minimum<0>());
		container_left_trait_type::template set<1>(left, bound_left_trait_type::template minimum<1>());
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,0>(container_right_trait_type::template get<0>(right)));
	}
};

}

template< > struct convert<::color::category::hsl_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsl_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsl_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsl_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsl_float,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_float,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_float,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_float,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_float,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_float,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_float,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsl_double,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_double,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_double,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_double,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_double,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_double,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_double,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_float > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_double > : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateHSL::convert_gray2hsl<::color::category::hsl_ldouble,::color::category::gray_ldouble> {};


}
}













namespace color {
namespace category {

class hsv_uint8 {};
class hsv_uint16 {};
class hsv_uint32 {};
class hsv_uint64 {};
class hsv_float {};
class hsv_double {};
class hsv_ldouble {};

}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}












namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::hsv_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}




namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}











namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
};

template< >
struct index< ::color::category::hsv_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::hsv_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
};

template< >
struct index< ::color::category::hsv_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
};

template< >
struct container< ::color::category::hsv_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

template< >
struct index< ::color::category::hsv_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}








namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff000000u;
}

inline
void black(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000000000ul;
}

inline
void black(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x40;
}

inline
void gray50(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x7c00;
}

inline
void gray50(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7f0000u;
}

inline
void gray50(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fff00000000ul;
}

inline
void gray50(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0.5 });
}

inline
void gray50(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0.5 });
}

inline
void gray50(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xc0;
}

inline
void white(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xfc00;
}

inline
void white(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000u;
}

inline
void white(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffff00000000ul;
}

inline
void white(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 1 });
}

inline
void white(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 1 });
}

inline
void white(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 1 });
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xf8;
}

inline
void red(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffe0;
}

inline
void red(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff00u;
}

inline
void red(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff0000ul;
}

inline
void red(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 1 });
}

inline
void red(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 1 });
}

inline
void red(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfa;
}

inline
void green(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffea;
}

inline
void green(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff55u;
}

inline
void green(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff5555ul;
}

inline
void green(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.333333, 1, 1 });
}

inline
void green(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.333333, 1, 1 });
}

inline
void green(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.333333, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfc;
}

inline
void blue(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xfff4;
}

inline
void blue(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffffaau;
}

inline
void blue(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffffaaaaul;
}

inline
void blue(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.666667, 1, 1 });
}

inline
void blue(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.666667, 1, 1 });
}

inline
void blue(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.666667, 1, 1 });
}

}
}






namespace color {
namespace make {

inline
void cyan(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfb;
}

inline
void cyan(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffef;
}

inline
void cyan(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff7fu;
}

inline
void cyan(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff7ffful;
}

inline
void cyan(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 1 });
}

inline
void cyan(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 1 });
}

inline
void cyan(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void magenta(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfd;
}

inline
void magenta(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xfff9;
}

inline
void magenta(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffffd4u;
}

inline
void magenta(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffffd554ul;
}

inline
void magenta(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 1, 1 });
}

inline
void magenta(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 1, 1 });
}

inline
void magenta(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void yellow(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xf9;
}

inline
void yellow(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffe5;
}

inline
void yellow(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff2au;
}

inline
void yellow(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff2aaaul;
}

inline
void yellow(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.166667, 1, 1 });
}

inline
void yellow(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.166667, 1, 1 });
}

inline
void yellow(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.166667, 1, 1 });
}

}
}






namespace color {
namespace make {

inline
void aqua(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfb;
}

inline
void aqua(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffef;
}

inline
void aqua(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff7fu;
}

inline
void aqua(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff7ffful;
}

inline
void aqua(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 1 });
}

inline
void aqua(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 1 });
}

inline
void aqua(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void fuchsia(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfd;
}

inline
void fuchsia(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xfff9;
}

inline
void fuchsia(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffffd4u;
}

inline
void fuchsia(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffffd554ul;
}

inline
void fuchsia(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 1, 1 });
}

inline
void fuchsia(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 1, 1 });
}

inline
void fuchsia(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void lime(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xfa;
}

inline
void lime(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffea;
}

inline
void lime(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff55u;
}

inline
void lime(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff5555ul;
}

inline
void lime(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.333333, 1, 1 });
}

inline
void lime(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.333333, 1, 1 });
}

inline
void lime(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.333333, 1, 1 });
}

}
}






namespace color {
namespace make {

inline
void maroon(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x78;
}

inline
void maroon(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fe0;
}

inline
void maroon(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff00u;
}

inline
void maroon(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff0000ul;
}

inline
void maroon(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0.5 });
}

inline
void maroon(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0.5 });
}

inline
void maroon(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void navy(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x7c;
}

inline
void navy(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x7ff4;
}

inline
void navy(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fffaau;
}

inline
void navy(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffffaaaaul;
}

inline
void navy(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.666667, 1, 0.5 });
}

inline
void navy(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.666667, 1, 0.5 });
}

inline
void navy(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.666667, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void olive(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x79;
}

inline
void olive(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fe5;
}

inline
void olive(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff2au;
}

inline
void olive(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff2aaaul;
}

inline
void olive(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.166667, 1, 0.5 });
}

inline
void olive(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.166667, 1, 0.5 });
}

inline
void olive(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.166667, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void orange(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0xf8;
}

inline
void orange(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xffe3;
}

inline
void orange(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffff1bu;
}

inline
void orange(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffffffffff1bbbul;
}

inline
void orange(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.108333, 1, 1 });
}

inline
void orange(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.108333, 1, 1 });
}

inline
void orange(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.108333, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void purple(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x7d;
}

inline
void purple(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x7ff9;
}

inline
void purple(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fffd4u;
}

inline
void purple(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffffd554ul;
}

inline
void purple(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 1, 0.5 });
}

inline
void purple(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 1, 0.5 });
}

inline
void purple(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 1, 0.5 });
}

}
}






namespace color {
namespace make {

inline
void silver(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x80;
}

inline
void silver(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xbc00;
}

inline
void silver(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffbf0000u;
}

inline
void silver(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffbfff00000000ul;
}

inline
void silver(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0.75 });
}

inline
void silver(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0.75 });
}

inline
void silver(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0.75 });
}

}
}





namespace color {
namespace make {

inline
void teal(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x7b;
}

inline
void teal(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0x7fef;
}

inline
void teal(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7fff7fu;
}

inline
void teal(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7fffffff7ffful;
}

inline
void teal(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 1, 0.5 });
}

inline
void teal(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 1, 0.5 });
}

inline
void teal(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 1, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void violet(::color::_internal::model< color::category::hsv_uint8 > & color_parameter) {
	color_parameter.container() = 0x9d;
}

inline
void violet(::color::_internal::model< color::category::hsv_uint16 > & color_parameter) {
	color_parameter.container() = 0xe9d9;
}

inline
void violet(::color::_internal::model< color::category::hsv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffee73d4u;
}

inline
void violet(::color::_internal::model< color::category::hsv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffeeee742ad554ul;
}

inline
void violet(::color::_internal::model< color::category::hsv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.833333, 0.453782, 0.933333 });
}

inline
void violet(::color::_internal::model< color::category::hsv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.833333, 0.453782, 0.933333 });
}

inline
void violet(::color::_internal::model< color::category::hsv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.833333, 0.453782, 0.933333 });
}

}
}





namespace color {
namespace _internal {
namespace _privateHSV {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2hsv {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::bound<category_left_type> bound_left_trait_type;
	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, bound_left_trait_type::template minimum<0>());
		container_left_trait_type::template set<1>(left, bound_left_trait_type::template minimum<1>());
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,0>(container_right_trait_type::template get<0>(right)));
	}
};
}

template< > struct convert<::color::category::hsv_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsv_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsv_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsv_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsv_float,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_float,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_float,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_float,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_float,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_float,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_float,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsv_double,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_double,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_double,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_double,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_double,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_double,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_double,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_float > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_double > : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateHSV::convert_gray2hsv<::color::category::hsv_ldouble,::color::category::gray_ldouble> {};


}
}






namespace color {
namespace _internal {
namespace _privateHSV {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_hsl2hsv {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type h = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type ss = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type l = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type v = (2 * l + ss*(1 - fabs(2*l-1))) /2;
		float_type s = 2*(v - l) / v;
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(h));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(s));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(v));
	}
};

}

template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint8,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint16,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint32,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_uint64,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::hsv_float,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_float,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_float,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_float,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_float,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_float,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_float,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_float,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::hsv_double,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_double,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_double,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_double,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_double,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_double,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_double,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_double,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_uint8 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_uint16 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_uint32 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_uint64 > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_float > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_float > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_double > : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_double > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::hsl_ldouble> : public ::color::_internal::_privateHSV::convert_hsl2hsv<::color::category::hsv_ldouble,::color::category::hsl_ldouble> {};


}
}













namespace color {
namespace category {

class rgb_uint8 {};
class rgb_uint16 {};
class rgb_uint32 {};
class rgb_uint64 {};
class rgb_float {};
class rgb_double {};
class rgb_ldouble {};

}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::rgb_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::rgb_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}












namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::rgb_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::rgb_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}




namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::rgb_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::rgb_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::rgb_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::rgb_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}











namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
};

template< >
struct index< ::color::category::rgb_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::rgb_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
};

template< >
struct index< ::color::category::rgb_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
};

template< >
struct container< ::color::category::rgb_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::rgb_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

template< >
struct index< ::color::category::rgb_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::rgb_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::rgb_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}








namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void gray50(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x7def;
}

inline
void gray50(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff808080;
}

inline
void gray50(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff800080008000u);
}

inline
void gray50(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({0.5,0.5,0.5});
}

inline
void gray50(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({0.5,0.5,0.5});
}

inline
void gray50(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({0.5,0.5,0.5});
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0xff;
}

inline
void white(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0xffff;
}

inline
void white(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffffff;
}

inline
void white(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffffffffffffu);
}

inline
void white(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({1,1,1});
}

inline
void white(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({1,1,1});
}

inline
void white(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({1,1,1});
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x07;
}

inline
void red(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x003F;
}

inline
void red(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ff;
}

inline
void red(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff00000000ffffu);
}

inline
void red(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 0 });
}

inline
void red(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 0 });
}

inline
void red(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = ((1<< 4) - 1) << 3;
}

inline
void green(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = (((1<< 6) - 1) << 6);
}

inline
void green(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00;
}

inline
void green(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void green(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0 });
}

inline
void green(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0 });
}

inline
void green(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 3 << 6;
}

inline
void blue(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0xF800;
}

inline
void blue(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000;
}

inline
void blue(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffff00000000u);
}

inline
void blue(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 1 });
}

inline
void blue(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 1 });
}

inline
void blue(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 1 });
}

}
}






namespace color {
namespace make {

inline
void cyan(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = (3 << 6) + (7 << 3);
}

inline
void cyan(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0xFFC0;
}

inline
void cyan(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffFFFF00;
}

inline
void cyan(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffFFFFFFFF0000u);
}

inline
void cyan(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 1 });
}

inline
void cyan(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 1 });
}

inline
void cyan(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void magenta(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void magenta(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void magenta(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffFF00FF;
}

inline
void magenta(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffFFFF0000FFFFu);
}

inline
void magenta(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 1 });
}

inline
void magenta(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 1 });
}

inline
void magenta(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 1 });
}

}
}





namespace color {
namespace make {

inline
void yellow(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void yellow(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void yellow(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ffff;
}

inline
void yellow(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff00000000ffffu);
}

inline
void yellow(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 1, 0 });
}

inline
void yellow(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 1, 0 });
}

inline
void yellow(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 1, 0 });
}

}
}






namespace color {
namespace make {

inline
void aqua(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = (3 << 6) + (7 << 3);
}

inline
void aqua(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0xFFC0;
}

inline
void aqua(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffFFFF00;
}

inline
void aqua(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffFFFFFFFF0000u);
}

inline
void aqua(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 1 });
}

inline
void aqua(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 1 });
}

inline
void aqua(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 1 });
}

}
}





namespace color {
namespace make {

inline
void fuchsia(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void fuchsia(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0xF83F;
}

inline
void fuchsia(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff00ff;
}

inline
void fuchsia(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void fuchsia(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 1 });
}

inline
void fuchsia(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 1 });
}

inline
void fuchsia(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 1 });
}

}
}





namespace color {
namespace make {

inline
void lime(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void lime(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void lime(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00;
}

inline
void lime(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void lime(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0 });
}

inline
void lime(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0 });
}

inline
void lime(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0 });
}

}
}






namespace color {
namespace make {

inline
void maroon(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void maroon(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void maroon(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff000080;
}

inline
void maroon(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void maroon(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0, 0 });
}

inline
void maroon(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0, 0 });
}

inline
void maroon(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void navy(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void navy(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void navy(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff800000;
}

inline
void navy(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void navy(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0.5 });
}

inline
void navy(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0.5 });
}

inline
void navy(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void olive(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void olive(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void olive(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff008080;
}

inline
void olive(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void olive(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0.5, 0 });
}

inline
void olive(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0.5, 0 });
}

inline
void olive(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0.5, 0 });
}

}
}





namespace color {
namespace make {

inline
void orange(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void orange(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void orange(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00A5FF;
}

inline
void orange(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void orange(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0.65, 0 });
}

inline
void orange(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0.65, 0 });
}

inline
void orange(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0.65, 0 });
}

}
}





namespace color {
namespace make {

inline
void purple(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void purple(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void purple(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff800080;
}

inline
void purple(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void purple(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0, 0.5 });
}

inline
void purple(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0, 0.5 });
}

inline
void purple(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0, 0.5 });
}

}
}






namespace color {
namespace make {

inline
void silver(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void silver(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void silver(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffC0C0C0;
}

inline
void silver(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void silver(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.75, 0.75, 0.75 });
}

inline
void silver(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.75, 0.75, 0.75 });
}

inline
void silver(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.75, 0.75, 0.75 });
}

}
}





namespace color {
namespace make {

inline
void teal(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void teal(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void teal(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xff808000;
}

inline
void teal(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void teal(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0.5, 0.5 });
}

inline
void teal(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0.5, 0.5 });
}

inline
void teal(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0.5, 0.5 });
}

}
}





namespace color {
namespace make {

inline
void violet(::color::_internal::model< color::category::rgb_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void violet(::color::_internal::model< color::category::rgb_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void violet(::color::_internal::model< color::category::rgb_uint32 > & color_parameter) {
	color_parameter.container() = 0xffEE82EE;
}

inline
void violet(::color::_internal::model< color::category::rgb_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void violet(::color::_internal::model< color::category::rgb_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 238/255.0, 130/255.0, 238/255.0 });
}

inline
void violet(::color::_internal::model< color::category::rgb_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 238/255.0, 130/255.0, 238/255.0 });
}

inline
void violet(::color::_internal::model< color::category::rgb_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 238/255.0, 130/255.0, 238/255.0 });
}

}
}






namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name >
struct convert_cmy2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		typedef ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
		typedef ::color::operation::_internal::invert< category_right_type > invert_type;
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(invert_type::template component<1>(container_right_trait_type::template get<1>(right))));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(invert_type::template component<2>(container_right_trait_type::template get<2>(right))));
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint8 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_float > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_cmyk2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type c = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type m = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type y = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type k = normalize_type::template process<3>(container_right_trait_type::template get<3>(right));
		float_type r = (1-c) * (1-k);
		float_type g = (1-m) * (1-k);
		float_type b = (1-y) * (1-k);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(r));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(g));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b));
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint8,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint16,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint32,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_uint64,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_float,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_double,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_uint8 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_uint16 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_uint32 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_uint64 > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_float > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_double > : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::cmyk_ldouble> : public ::color::_internal::_privateRGB::convert_cmyk2rgb<::color::category::rgb_ldouble,::color::category::cmyk_ldouble> {};


}
}






namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,0>(container_right_trait_type::template get<0>(right)));
	}
};
}

template< > struct convert<::color::category::rgb_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_float > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_double > : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateRGB::convert_gray2rgb<::color::category::rgb_ldouble,::color::category::gray_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_hsl2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	typedef ::color::_internal::_privateRGB::convert_hsl2rgb<category_left_name, category_right_name, float_name> this_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type h = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type s = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type l = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type r;
		float_type g;
		float_type b;
		if(s == 0) {
			r = l;
			g = l;
			b = l;
		} else {
			float_type q = l < float_type(0.5) ? (l * (1 + s)) : (l + s - l * s);
			float_type p = float_type(2) * l - q;
			r = this_type::value(p, q, h + (float_type(1) / float_type(3)) + (float_type(2) / float_type(3) < h ? -1 :0));
			g = this_type::value(p, q, h);
			b = this_type::value(p, q, h - (float_type(1) / float_type(3)) + (h < float_type(1) / float_type(3) ? +1 :0));
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(r));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(g));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b));
	}

private:
	static float_type value(float_type const& p, float_type const& q, float_type const& t) {
		if(t < float_type(1)/float_type(6)) {
			return (p + (q - p) * float_type(6) * t);
		}
		if(t < float_type(1)/float_type(2)) {
			return (q);
		}
		if(t < float_type(2)/float_type(3)) {
			return (p + (q - p) * ((float_type(2)/float_type(3)) - t) * float_type(6));
		}
		return p ;
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint8 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_float > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_hsv2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type h = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type s = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type v = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		int region = int(6 * h);
		float_type f = h * 6 - region ;
		float_type p = v * (1 - s);
		float_type q = v * (1 - f * s);
		float_type t = v * (1 - (1 - f) * s);
		float_type r;
		float_type g;
		float_type b;
		switch(region % 6) {
		case 0:
			r = v, g = t, b = p;
			break;
		case 1:
			r = q, g = v, b = p;
			break;
		case 2:
			r = p, g = v, b = t;
			break;
		case 3:
			r = p, g = q, b = v;
			break;
		case 4:
			r = t, g = p, b = v;
			break;
		case 5:
			r = v, g = p, b = q;
			break;
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(r));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(g));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b));
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint8 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_float > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_ldouble> {};


}
}

















namespace color {
namespace category {

class xyz_uint8 {};
class xyz_uint16 {};
class xyz_uint32 {};
class xyz_uint64 {};
class xyz_float {};
class xyz_double {};
class xyz_ldouble {};

}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}












namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::xyz_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}




namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}











namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
};

template< >
struct index< ::color::category::xyz_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::xyz_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
};

template< >
struct index< ::color::category::xyz_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
};

template< >
struct container< ::color::category::xyz_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

template< >
struct index< ::color::category::xyz_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}








namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::xyz_uint8 > & color_parameter) {
	color_parameter.container() = 0;
}

inline
void gray50(::color::_internal::model< color::category::xyz_uint16 > & color_parameter) {
	color_parameter.container() = 0x7def;
}

inline
void gray50(::color::_internal::model< color::category::xyz_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7f7f7f;
}

inline
void gray50(::color::_internal::model< color::category::xyz_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff7fff7fff7fffu);
}

inline
void gray50(::color::_internal::model< color::category::xyz_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({0.5,0.5,0.5});
}

inline
void gray50(::color::_internal::model< color::category::xyz_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({0.5,0.5,0.5});
}

inline
void gray50(::color::_internal::model< color::category::xyz_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({0.5,0.5,0.5});
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::xyz_uint8 > & color_parameter) {
	color_parameter.container() = 0xff;
}

inline
void white(::color::_internal::model< color::category::xyz_uint16 > & color_parameter) {
	color_parameter.container() = 0xffff;
}

inline
void white(::color::_internal::model< color::category::xyz_uint32 > & color_parameter) {
	color_parameter.container() = 0xffffffff;
}

inline
void white(::color::_internal::model< color::category::xyz_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffffffffffffu);
}

inline
void white(::color::_internal::model< color::category::xyz_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({1,1,1});
}

inline
void white(::color::_internal::model< color::category::xyz_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({1,1,1});
}

inline
void white(::color::_internal::model< color::category::xyz_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({1,1,1});
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::xyz_uint8 > & color_parameter) {
	color_parameter.container() = 0x07;
}

inline
void red(::color::_internal::model< color::category::xyz_uint16 > & color_parameter) {
	color_parameter.container() = 0x003F;
}

inline
void red(::color::_internal::model< color::category::xyz_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ff;
}

inline
void red(::color::_internal::model< color::category::xyz_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff00000000ffffu);
}

inline
void red(::color::_internal::model< color::category::xyz_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 0 });
}

inline
void red(::color::_internal::model< color::category::xyz_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 0 });
}

inline
void red(::color::_internal::model< color::category::xyz_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::xyz_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void green(::color::_internal::model< color::category::xyz_uint16 > & color_parameter) {
	color_parameter.container() = 0x03E0;
}

inline
void green(::color::_internal::model< color::category::xyz_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00ff00;
}

inline
void green(::color::_internal::model< color::category::xyz_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffff0000ffff0000u);
}

inline
void green(::color::_internal::model< color::category::xyz_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 1, 0 });
}

inline
void green(::color::_internal::model< color::category::xyz_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 1, 0 });
}

inline
void green(::color::_internal::model< color::category::xyz_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 1, 0 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::xyz_uint8 > & color_parameter) {
	color_parameter.container() = 0xC0;
}

inline
void blue(::color::_internal::model< color::category::xyz_uint16 > & color_parameter) {
	color_parameter.container() = 0x7C00;
}

inline
void blue(::color::_internal::model< color::category::xyz_uint32 > & color_parameter) {
	color_parameter.container() = 0xffff0000;
}

inline
void blue(::color::_internal::model< color::category::xyz_uint64 > & color_parameter) {
	color_parameter.container() = std::uint64_t(0xffffffff00000000u);
}

inline
void blue(::color::_internal::model< color::category::xyz_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 1 });
}

inline
void blue(::color::_internal::model< color::category::xyz_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 1 });
}

inline
void blue(::color::_internal::model< color::category::xyz_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 1 });
}

}
}





namespace color {
namespace _internal {
namespace _privateXYZ {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2xyz {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
	}
};
}

template< > struct convert<::color::category::xyz_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::xyz_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::xyz_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::xyz_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::xyz_float,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_float,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_float,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_float,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_float,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_float,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_float,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::xyz_double,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_double,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_double,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_double,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_double,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_double,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_double,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_float > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_double > : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateXYZ::convert_gray2xyz<::color::category::xyz_ldouble,::color::category::gray_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateXYZ {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2xyz {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static float_type b11 = 0.49000, b12 = 0.31000, b13 = 0.20000;
		static float_type b21 = 0.17697, b22 = 0.81240, b23 = 0.01063;
		static float_type b31 = 0.00000, b32 = 0.01000, b33 = 0.99000;
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(b11 * r + b12 * g + b13 * b));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(b21 * r + b22 * g + b23 * b));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b31 * r + b32 * g + b33 * b));
	}
};

}

template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_float,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_float,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_double,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_double,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_xyz {
	typedef color::category::xyz_uint32 category_type;
};


template<> struct pick_xyz< std::uint8_t > {
	typedef ::color::category::xyz_uint8 category_type;
};
template<> struct pick_xyz< std::uint16_t > {
	typedef ::color::category::xyz_uint16 category_type;
};
template<> struct pick_xyz< std::uint32_t > {
	typedef ::color::category::xyz_uint32 category_type;
};
template<> struct pick_xyz< std::uint64_t > {
	typedef ::color::category::xyz_uint64 category_type;
};
template<> struct pick_xyz< float > {
	typedef ::color::category::xyz_float category_type;
};
template<> struct pick_xyz< double > {
	typedef ::color::category::xyz_double category_type;
};
template<> struct pick_xyz< long double > {
	typedef ::color::category::xyz_ldouble category_type;
};
}

template< typename type_name >
using xyz = color::_internal::model< typename color::_internal::pick_xyz< type_name >::category_type >;

}

namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_xyz2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static float_type b11 = 2.3646138465383655, b12 = -0.896540570739668, b13 = -0.4680732757986974;
		static float_type b21 = -0.515166208447888, b22 = 1.4264081038563887, b23 = 0.08875810459149917;
		static float_type b31 = 0.005203699075231192, b32 = -0.014408162665216047, b33 = 1.0092044635899848;
		float_type x = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type y = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type z = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(b11 * x + b12 * y + b13 * z));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(b21 * x + b22 * y + b23 * z));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b31 * x + b32 * y + b33 * z));
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint8 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_float > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_ldouble> {};


}
}













namespace color {
namespace category {
class yiq_uint8 {};
class yiq_uint16 {};
class yiq_uint32 {};
class yiq_uint64 {};
class yiq_float {};
class yiq_double {};
class yiq_ldouble {};
}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}












namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yiq_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::yiq_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::yiq_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}




namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}





namespace color {
namespace _internal {

template< >
struct index< ::color::category::yiq_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::yiq_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct index< ::color::category::yiq_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_double >
		: public ::color::_internal::utility::component::array< double, unsigned> {
};

template< >
struct container< ::color::category::yiq_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}







namespace color {
namespace _internal {

template< >
struct index< ::color::category::yiq_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yiq_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::yiq_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}











namespace color {
namespace get {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
inphase(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<1>();
}

}
}
}

inline
::color::_internal::model< color::category::yiq_uint8 >::component_const_type
inphase(::color::_internal::model< color::category::yiq_uint8 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::yiq_uint16 >::component_const_type
inphase(::color::_internal::model< color::category::yiq_uint16 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint32 >::component_const_type
inphase(::color::_internal::model< color::category::yiq_uint32 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint64 >::component_const_type
inphase(::color::_internal::model< color::category::yiq_uint64 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_float >::component_const_type
inphase(::color::_internal::model< color::category::yiq_float > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_float>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_double >::component_const_type
inphase(::color::_internal::model< color::category::yiq_double > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_double>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_ldouble >::component_const_type
inphase(::color::_internal::model< color::category::yiq_ldouble > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::inphase<color::category::yiq_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
quadrature(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<2>();
}

}
}
}

inline
::color::_internal::model< color::category::yiq_uint8 >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_uint8 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::yiq_uint16 >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_uint16 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint32 >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_uint32 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint64 >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_uint64 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_float >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_float > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_float>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_double >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_double > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_double>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_ldouble >::component_const_type
quadrature(::color::_internal::model< color::category::yiq_ldouble > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::quadrature<color::category::yiq_ldouble>(color_parameter);
};


}
}

namespace color {
namespace get {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
red(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		1 * (color_parameter.template get<0>() - trait_type::template minimum<0>()) / float_name(trait_type::template range<0>())
		+ 0.999525 * (color_parameter.template get<1>() - trait_type::template minimum<1>()) / float_name(trait_type::template range<1>())
		+ 0.739859 * (color_parameter.template get<2>() - trait_type::template minimum<2>()) / float_name(trait_type::template range<2>())
		- 0.869692;
	return component_type(value * trait_type::template range<0>() + trait_type::template minimum<0>());
}
}
}
}

inline
::color::_internal::model< color::category::yiq_uint8 >::component_const_type
red(::color::_internal::model< color::category::yiq_uint8 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::yiq_uint16 >::component_const_type
red(::color::_internal::model< color::category::yiq_uint16 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint32 >::component_const_type
red(::color::_internal::model< color::category::yiq_uint32 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint64 >::component_const_type
red(::color::_internal::model< color::category::yiq_uint64 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_float >::component_const_type
red(::color::_internal::model< color::category::yiq_float > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_float>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_double >::component_const_type
red(::color::_internal::model< color::category::yiq_double > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_double>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_ldouble >::component_const_type
red(::color::_internal::model< color::category::yiq_ldouble > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::red<color::category::yiq_ldouble>(color_parameter);
};


}
}







namespace color {
namespace get {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
green(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		1 * (color_parameter.template get<0>() - trait_type::template minimum<0>()) / float_name(trait_type::template range<0>())
		- 0.284399 * (color_parameter.template get<1>() - trait_type::template minimum<1>()) / float_name(trait_type::template range<1>())
		- 0.771312 * (color_parameter.template get<2>() - trait_type::template minimum<2>()) / float_name(trait_type::template range<2>())
		+ 0.527856;
	return component_type(value * trait_type::template range<0>() + trait_type::template minimum<0>());
}
}
}
}

inline
::color::_internal::model< color::category::yiq_uint8 >::component_const_type
green(::color::_internal::model< color::category::yiq_uint8 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::yiq_uint16 >::component_const_type
green(::color::_internal::model< color::category::yiq_uint16 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint32 >::component_const_type
green(::color::_internal::model< color::category::yiq_uint32 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint64 >::component_const_type
green(::color::_internal::model< color::category::yiq_uint64 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_float >::component_const_type
green(::color::_internal::model< color::category::yiq_float > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_float>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_double >::component_const_type
green(::color::_internal::model< color::category::yiq_double > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_double>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_ldouble >::component_const_type
green(::color::_internal::model< color::category::yiq_ldouble > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::green<color::category::yiq_ldouble>(color_parameter);
};


}
}




namespace color {
namespace get {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
blue(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		1.00000 * (color_parameter.template get<0>() - trait_type::template minimum<0>()) / float_name(trait_type::template range<0>())
		- 1.15704 * (color_parameter.template get<1>() - trait_type::template minimum<1>()) / float_name(trait_type::template range<1>())
		+ 2.03086 * (color_parameter.template get<2>() - trait_type::template minimum<2>()) / float_name(trait_type::template range<2>())
		-0.436912;
	return component_type(value * trait_type::template range<0>() + trait_type::template minimum<0>());
}
}
}
}

inline
::color::_internal::model< color::category::yiq_uint8 >::component_const_type
blue(::color::_internal::model< color::category::yiq_uint8 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::yiq_uint16 >::component_const_type
blue(::color::_internal::model< color::category::yiq_uint16 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint32 >::component_const_type
blue(::color::_internal::model< color::category::yiq_uint32 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint64 >::component_const_type
blue(::color::_internal::model< color::category::yiq_uint64 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_float >::component_const_type
blue(::color::_internal::model< color::category::yiq_float > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_float>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_double >::component_const_type
blue(::color::_internal::model< color::category::yiq_double > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_double>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_ldouble >::component_const_type
blue(::color::_internal::model< color::category::yiq_ldouble > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_ldouble>(color_parameter);
};


}
}








namespace color {
namespace get {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
typename ::color::_internal::model< category_name >::component_const_type
gray(::color::_internal::model< category_name > const& color_parameter) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	return color_parameter.template get<0>();
}

}
}
}

inline
::color::_internal::model< color::category::yiq_uint8 >::component_const_type
gray(::color::_internal::model< color::category::yiq_uint8 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_uint8>(color_parameter);
}

inline
::color::_internal::model< color::category::yiq_uint16 >::component_const_type
gray(::color::_internal::model< color::category::yiq_uint16 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_uint16>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint32 >::component_const_type
gray(::color::_internal::model< color::category::yiq_uint32 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_uint32>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_uint64 >::component_const_type
gray(::color::_internal::model< color::category::yiq_uint64 > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_uint64>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_float >::component_const_type
gray(::color::_internal::model< color::category::yiq_float > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_float>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_double >::component_const_type
gray(::color::_internal::model< color::category::yiq_double > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_double>(color_parameter);
};

inline
::color::_internal::model< color::category::yiq_ldouble >::component_const_type
gray(::color::_internal::model< color::category::yiq_ldouble > const& color_parameter) {
	return ::color::get::_internal::yiq::_internal::gray<color::category::yiq_ldouble>(color_parameter);
};


}
}








namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name >
inline
void
red
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<0>() - (component_parameter - trait_type::template minimum<0>())) + trait_type::template minimum<0>();
	color_parameter.template set<0>(new_component);
}

}
}
}

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
red
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::red<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name >
inline
void
green
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<1>() - (component_parameter - trait_type::template minimum<1>())) + trait_type::template minimum<1>();
	color_parameter.template set<1>(new_component);
}

}
}
}

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
green
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::green<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name >
inline
void
blue
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	component_type new_component;;
	new_component = (trait_type::template range<2>() - (component_parameter - trait_type::template minimum<2>())) + trait_type::template minimum<2>();
	color_parameter.template set<2>(new_component);
}

}
}
}

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
blue
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::blue<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}








namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name, typename float_name = double >
inline
void
gray
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	typedef ::color::_internal::model< category_name > model_type;
	typedef ::color::_internal::trait< category_name > trait_type;
	typedef typename trait_type::component_type component_type;
	float_name value =
		0.2126 * (float_name(1) - (color_parameter.template get<0>() - trait_type::template minimum<0>()) / trait_type::template range<0>())
		+ 0.7152 * (float_name(1) - (color_parameter.template get<1>() - trait_type::template minimum<1>()) / trait_type::template range<1>())
		+ 0.0722 * (float_name(1) - (color_parameter.template get<2>() - trait_type::template minimum<2>()) / trait_type::template range<2>());
	value = float_name(component_parameter - trait_type::template minimum<0>()) / trait_type::template range<0>() / value;
	::color::operation::scale::accumulate(color_parameter, value);
}

}
}
}

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
gray
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::gray<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}






namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name >
inline
void
yellow
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<1>(component_parameter);
}

}
}
}

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
yellow
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::yellow<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name >
inline
void
magenta
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<2>(component_parameter);
}

}
}
}

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
magenta
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::magenta<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace set {
namespace _internal {
namespace yiq {
namespace _internal {

template< typename category_name >
inline
void
cyan
(
	::color::_internal::model< category_name > & color_parameter,
	typename ::color::_internal::model< category_name >::component_input_const_type component_parameter
) {
	color_parameter.template set<0>(component_parameter);
}

}
}
}

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint8 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_uint8>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint16 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_uint16>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint32 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_uint32>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter,
	::color::_internal::model< ::color::category::yiq_uint64 >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_uint64>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_float > & color_parameter,
	::color::_internal::model< ::color::category::yiq_float >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_float>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_double > & color_parameter,
	::color::_internal::model< ::color::category::yiq_double >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_double>(color_parameter, component_parameter);
};

inline
void
cyan
(
	::color::_internal::model< ::color::category::yiq_ldouble > & color_parameter,
	::color::_internal::model< ::color::category::yiq_ldouble >::component_input_const_type component_parameter
) {
	::color::set::_internal::yiq::_internal::cyan<::color::category::yiq_ldouble>(color_parameter, component_parameter);
};

}
}





namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff000000u;
}

inline
void black(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000000000ul;
}

inline
void black(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x3;
}

inline
void gray50(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xf;
}

inline
void gray50(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00007fu;
}

inline
void gray50(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000007ffful;
}

inline
void gray50(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0, 1.38778e-17 });
}

inline
void gray50(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0, 1.38778e-17 });
}

inline
void gray50(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0, 1.38778e-17 });
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x7;
}

inline
void white(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x1f;
}

inline
void white(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ffu;
}

inline
void white(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff00000000fffful;
}

inline
void white(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 2.77556e-17 });
}

inline
void white(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 2.77556e-17 });
}

inline
void white(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 2.77556e-17 });
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x22;
}

inline
void red(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x3649;
}

inline
void red(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff35974cu;
}

inline
void red(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff362198804c8aul;
}

inline
void red(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.299, 0.595716, 0.211456 });
}

inline
void red(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.299, 0.595716, 0.211456 });
}

inline
void red(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.299, 0.595716, 0.211456 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0xfc;
}

inline
void green(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x8312;
}

inline
void green(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7bbb95u;
}

inline
void green(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7a38b9be9645ul;
}

inline
void green(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.587, -0.274453, -0.522591 });
}

inline
void green(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.587, -0.274453, -0.522591 });
}

inline
void green(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.587, -0.274453, -0.522591 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x30;
}

inline
void blue(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x4ee3;
}

inline
void blue(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff4faf1du;
}

inline
void blue(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff4fa6adc31d2eul;
}

inline
void blue(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.114, -0.321263, 0.311135 });
}

inline
void blue(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.114, -0.321263, 0.311135 });
}

inline
void blue(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.114, -0.321263, 0.311135 });
}

}
}






namespace color {
namespace make {

inline
void cyan(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x24;
}

inline
void cyan(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xcdd5;
}

inline
void cyan(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xffcb69b2u;
}

inline
void cyan(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffc9df6780b374ul;
}

inline
void cyan(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.701, -0.595716, -0.211456 });
}

inline
void cyan(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.701, -0.595716, -0.211456 });
}

inline
void cyan(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.701, -0.595716, -0.211456 });
}

}
}





namespace color {
namespace make {

inline
void magenta(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x4a;
}

inline
void magenta(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x810c;
}

inline
void magenta(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff854569u;
}

inline
void magenta(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff85c8464269b9ul;
}

inline
void magenta(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.413, 0.274453, 0.522591 });
}

inline
void magenta(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.413, 0.274453, 0.522591 });
}

inline
void magenta(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.413, 0.274453, 0.522591 });
}

}
}





namespace color {
namespace make {

inline
void yellow(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x16;
}

inline
void yellow(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xb53b;
}

inline
void yellow(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xffb151e1u;
}

inline
void yellow(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffb05a523de2d0ul;
}

inline
void yellow(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.886, 0.321263, -0.311135 });
}

inline
void yellow(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.886, 0.321263, -0.311135 });
}

inline
void yellow(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.886, 0.321263, -0.311135 });
}

}
}






namespace color {
namespace make {

inline
void aqua(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x24;
}

inline
void aqua(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xcdd5;
}

inline
void aqua(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xffcb69b2u;
}

inline
void aqua(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffc9df6780b374ul;
}

inline
void aqua(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.701, -0.595716, -0.211456 });
}

inline
void aqua(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.701, -0.595716, -0.211456 });
}

inline
void aqua(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.701, -0.595716, -0.211456 });
}

}
}





namespace color {
namespace make {

inline
void fuchsia(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x4a;
}

inline
void fuchsia(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x810c;
}

inline
void fuchsia(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff854569u;
}

inline
void fuchsia(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff85c8464269b9ul;
}

inline
void fuchsia(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.413, 0.274453, 0.522591 });
}

inline
void fuchsia(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.413, 0.274453, 0.522591 });
}

inline
void fuchsia(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.413, 0.274453, 0.522591 });
}

}
}





namespace color {
namespace make {

inline
void lime(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0xfc;
}

inline
void lime(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x8312;
}

inline
void lime(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7bbb95u;
}

inline
void lime(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7a38b9be9645ul;
}

inline
void lime(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.587, -0.274453, -0.522591 });
}

inline
void lime(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.587, -0.274453, -0.522591 });
}

inline
void lime(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.587, -0.274453, -0.522591 });
}

}
}






namespace color {
namespace make {

inline
void maroon(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x11;
}

inline
void maroon(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x1924;
}

inline
void maroon(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff1a4b26u;
}

inline
void maroon(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff1b104c402645ul;
}

inline
void maroon(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.1495, 0.297858, 0.105728 });
}

inline
void maroon(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.1495, 0.297858, 0.105728 });
}

inline
void maroon(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.1495, 0.297858, 0.105728 });
}

}
}





namespace color {
namespace make {

inline
void navy(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x38;
}

inline
void navy(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x2781;
}

inline
void navy(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff27d80eu;
}

inline
void navy(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff27d3d6e20e97ul;
}

inline
void navy(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.057, -0.160632, 0.155567 });
}

inline
void navy(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.057, -0.160632, 0.155567 });
}

inline
void navy(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.057, -0.160632, 0.155567 });
}

}
}





namespace color {
namespace make {

inline
void olive(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0xb;
}

inline
void olive(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xdc8d;
}

inline
void olive(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xffd92870u;
}

inline
void olive(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffd82d291e7168ul;
}

inline
void olive(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.443, 0.160632, -0.155567 });
}

inline
void olive(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.443, 0.160632, -0.155567 });
}

inline
void olive(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.443, 0.160632, -0.155567 });
}

}
}





namespace color {
namespace make {

inline
void orange(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x14;
}

inline
void orange(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xe195;
}

inline
void orange(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xffe06aadu;
}

inline
void orange(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffdf2d6ad5ae37ul;
}

inline
void orange(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.68055, 0.417322, -0.128228 });
}

inline
void orange(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.68055, 0.417322, -0.128228 });
}

inline
void orange(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.68055, 0.417322, -0.128228 });
}

}
}





namespace color {
namespace make {

inline
void purple(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x1;
}

inline
void purple(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x4086;
}

inline
void purple(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff422234u;
}

inline
void purple(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff42e4232134dcul;
}

inline
void purple(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.2065, 0.137226, 0.261296 });
}

inline
void purple(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.2065, 0.137226, 0.261296 });
}

inline
void purple(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.2065, 0.137226, 0.261296 });
}

}
}






namespace color {
namespace make {

inline
void silver(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x5;
}

inline
void silver(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x17;
}

inline
void silver(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000bfu;
}

inline
void silver(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff00000000bffful;
}

inline
void silver(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.75, 0, 2.08167e-17 });
}

inline
void silver(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.75, 0, 2.08167e-17 });
}

inline
void silver(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.75, 0, 2.08167e-17 });
}

}
}





namespace color {
namespace make {

inline
void teal(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x32;
}

inline
void teal(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0xeaea;
}

inline
void teal(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xffe6b559u;
}

inline
void teal(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffe4f0b3c059baul;
}

inline
void teal(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.3505, -0.297858, -0.105728 });
}

inline
void teal(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.3505, -0.297858, -0.105728 });
}

inline
void teal(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.3505, -0.297858, -0.105728 });
}

}
}





namespace color {
namespace make {

inline
void violet(::color::_internal::model< color::category::yiq_uint8 > & color_parameter) {
	color_parameter.container() = 0x4;
}

inline
void violet(::color::_internal::model< color::category::yiq_uint16 > & color_parameter) {
	color_parameter.container() = 0x3475;
}

inline
void violet(::color::_internal::model< color::category::yiq_uint32 > & color_parameter) {
	color_parameter.container() = 0xff381daeu;
}

inline
void violet(::color::_internal::model< color::category::yiq_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff38a91dc1af49ul;
}

inline
void violet(::color::_internal::model< color::category::yiq_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.684722, 0.116239, 0.221333 });
}

inline
void violet(::color::_internal::model< color::category::yiq_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.684722, 0.116239, 0.221333 });
}

inline
void violet(::color::_internal::model< color::category::yiq_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.684722, 0.116239, 0.221333 });
}

}
}





namespace color {
namespace _internal {
namespace _privateYIQ {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2yiq {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::bound<category_left_type> bound_left_trait_type;
	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type g = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(g));
		container_left_trait_type::template set<1>(left, bound_left_trait_type::template minimum<1>());
		container_left_trait_type::template set<2>(left, bound_left_trait_type::template minimum<2>());
	}
};
}

template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yiq_float,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_float,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_float,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_float,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_float,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_float,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_float,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yiq_double,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_double,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_double,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_double,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_double,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_double,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_double,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_float > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateYIQ {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2yiq {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static float_type b11 = 0.2990000000000000000, b12 = 0.5870000000000000000, b13 = 0.1140000000000000000;
		static float_type b21 = 0.5957161349127745527, b22 = -0.2744528378392564636, b23 = -0.3212632970735180890;
		static float_type b31 = 0.2114564021201178664, b32 = -0.5225910452916111683, b33 = 0.3111346431714933019;
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(b11 * r + b12 * g + b13 * b));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(b21 * r + b22 * g + b23 * b));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b31 * r + b32 * g + b33 * b));
	}
};

}

template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_float,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_float,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_double,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_double,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_yiq {
	typedef color::category::yiq_uint32 category_type;
};


template<> struct pick_yiq< std::uint8_t > {
	typedef ::color::category::yiq_uint8 category_type;
};
template<> struct pick_yiq< std::uint16_t > {
	typedef ::color::category::yiq_uint16 category_type;
};
template<> struct pick_yiq< std::uint32_t > {
	typedef ::color::category::yiq_uint32 category_type;
};
template<> struct pick_yiq< std::uint64_t > {
	typedef ::color::category::yiq_uint64 category_type;
};
template<> struct pick_yiq< float > {
	typedef ::color::category::yiq_float category_type;
};
template<> struct pick_yiq< double > {
	typedef ::color::category::yiq_double category_type;
};
template<> struct pick_yiq< long double > {
	typedef ::color::category::yiq_ldouble category_type;
};
}

template< typename type_name >
using yiq = color::_internal::model< typename color::_internal::pick_yiq< type_name >::category_type >;

}




namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_yiq2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static float_type b11 = 1, b12 = 0.9562948323208939905, b13 = 0.6210251254447287141;
		static float_type b21 = 1, b22 = -0.2721214740839773195, b23 = -0.6473809535176157222;
		static float_type b31 = 1, b32 = -1.1069899085671282160, b33 = 1.7046149754988293290;
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(b11 * r + b12 * g + b13 * b));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(b21 * r + b22 * g + b23 * b));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b31 * r + b32 * g + b33 * b));
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint8 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_float > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_ldouble> {};


}
}













namespace color {
namespace category {

class yuv_uint8 {};
class yuv_uint16 {};
class yuv_uint32 {};
class yuv_uint64 {};
class yuv_float {};
class yuv_double {};
class yuv_ldouble {};

}
}








namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::bound::bound332< unsigned > {
};

template< >
struct index< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
};

template< >
struct container< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::container::cner332< unsigned > {
};

}
}












namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::bound::bound556< unsigned > {
};

template< >
struct index< ::color::category::yuv_uint16 >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
};

template< >
struct container< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::container::cner556< unsigned > {
};

}
}




namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
};

template< >
struct index< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
};

template< >
struct container< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
};

template< >
struct index< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
};

template< >
struct container< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
};

}
}











namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
};

template< >
struct index< ::color::category::yuv_float >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
};

template< >
struct container< ::color::category::yuv_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
};

template< >
struct index< ::color::category::yuv_double >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
};

template< >
struct container< ::color::category::yuv_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}
namespace color {
namespace _internal {

template< >
struct bound< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

template< >
struct index< ::color::category::yuv_ldouble >
		: public color::_internal::utility::type::index< unsigned > {
};

template< >
struct component< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
};

template< >
struct container< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}








namespace color {
namespace make {

inline
void black(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x0;
}

inline
void black(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff000000u;
}

inline
void black(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000000000ul;
}

inline
void black(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0, 0, 0 });
}

inline
void black(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void gray50(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x3;
}

inline
void gray50(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0xf;
}

inline
void gray50(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff00007fu;
}

inline
void gray50(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff000000007ffful;
}

inline
void gray50(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.5, 0, 0 });
}

inline
void gray50(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.5, 0, 0 });
}

inline
void gray50(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.5, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void white(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x7;
}

inline
void white(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x1f;
}

inline
void white(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000ffu;
}

inline
void white(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff00000000fffful;
}

inline
void white(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 1, 0, 0 });
}

inline
void white(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 1, 0, 0 });
}

inline
void white(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 1, 0, 0 });
}

}
}






namespace color {
namespace make {

inline
void red(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x7a;
}

inline
void red(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x9b89;
}

inline
void red(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff9cdb4cu;
}

inline
void red(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff9d70da564c8aul;
}

inline
void red(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.299, -0.147138, 0.615 });
}

inline
void red(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.299, -0.147138, 0.615 });
}

inline
void red(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.299, -0.147138, 0.615 });
}

}
}





namespace color {
namespace make {

inline
void green(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0xf4;
}

inline
void green(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x8312;
}

inline
void green(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7db795u;
}

inline
void green(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7c2bb60e9645ul;
}

inline
void green(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.587, -0.288862, -0.514986 });
}

inline
void green(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.587, -0.288862, -0.514986 });
}

inline
void green(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.587, -0.288862, -0.514986 });
}

}
}





namespace color {
namespace make {

inline
void blue(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x18;
}

inline
void blue(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0xe9a3;
}

inline
void blue(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffe76f1du;
}

inline
void blue(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffe6666f9d1d2eul;
}

inline
void blue(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.114, 0.436, -0.100014 });
}

inline
void blue(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.114, 0.436, -0.100014 });
}

inline
void blue(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.114, 0.436, -0.100014 });
}

}
}






namespace color {
namespace make {

inline
void cyan(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0xcc;
}

inline
void cyan(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x6895;
}

inline
void cyan(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff6425b2u;
}

inline
void cyan(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff629025aab374ul;
}

inline
void cyan(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.701, 0.147138, -0.615 });
}

inline
void cyan(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.701, 0.147138, -0.615 });
}

inline
void cyan(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.701, 0.147138, -0.615 });
}

}
}





namespace color {
namespace make {

inline
void magenta(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x52;
}

inline
void magenta(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x810c;
}

inline
void magenta(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff834969u;
}

inline
void magenta(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff83d549f269b9ul;
}

inline
void magenta(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.413, 0.288862, 0.514986 });
}

inline
void magenta(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.413, 0.288862, 0.514986 });
}

inline
void magenta(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.413, 0.288862, 0.514986 });
}

}
}





namespace color {
namespace make {

inline
void yellow(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x2e;
}

inline
void yellow(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x1a7b;
}

inline
void yellow(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff1991e1u;
}

inline
void yellow(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff199a9063e2d0ul;
}

inline
void yellow(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.886, -0.436, 0.100014 });
}

inline
void yellow(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.886, -0.436, 0.100014 });
}

inline
void yellow(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.886, -0.436, 0.100014 });
}

}
}






namespace color {
namespace make {

inline
void aqua(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0xcc;
}

inline
void aqua(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x6895;
}

inline
void aqua(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff6425b2u;
}

inline
void aqua(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff629025aab374ul;
}

inline
void aqua(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.701, 0.147138, -0.615 });
}

inline
void aqua(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.701, 0.147138, -0.615 });
}

inline
void aqua(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.701, 0.147138, -0.615 });
}

}
}





namespace color {
namespace make {

inline
void fuchsia(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x52;
}

inline
void fuchsia(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x810c;
}

inline
void fuchsia(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff834969u;
}

inline
void fuchsia(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff83d549f269b9ul;
}

inline
void fuchsia(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.413, 0.288862, 0.514986 });
}

inline
void fuchsia(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.413, 0.288862, 0.514986 });
}

inline
void fuchsia(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.413, 0.288862, 0.514986 });
}

}
}





namespace color {
namespace make {

inline
void lime(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0xf4;
}

inline
void lime(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x8312;
}

inline
void lime(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff7db795u;
}

inline
void lime(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff7c2bb60e9645ul;
}

inline
void lime(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.587, -0.288862, -0.514986 });
}

inline
void lime(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.587, -0.288862, -0.514986 });
}

inline
void lime(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.587, -0.288862, -0.514986 });
}

}
}






namespace color {
namespace make {

inline
void maroon(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x1;
}

inline
void maroon(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x4fc4;
}

inline
void maroon(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff4eee26u;
}

inline
void maroon(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff4eb8ed2b2645ul;
}

inline
void maroon(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.1495, -0.0735689, 0.3075 });
}

inline
void maroon(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.1495, -0.0735688, 0.3075 });
}

inline
void maroon(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.1495, -0.0735688, 0.3075 });
}

}
}





namespace color {
namespace make {

inline
void navy(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x8;
}

inline
void navy(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0xf4c1;
}

inline
void navy(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xfff4370eu;
}

inline
void navy(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xfffff33337ce0e97ul;
}

inline
void navy(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.057, 0.218, -0.0500071 });
}

inline
void navy(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.057, 0.218, -0.0500071 });
}

inline
void navy(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.057, 0.218, -0.0500071 });
}

}
}





namespace color {
namespace make {

inline
void olive(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x3b;
}

inline
void olive(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0xf4d;
}

inline
void olive(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0cc970u;
}

inline
void olive(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff0ccdc8327168ul;
}

inline
void olive(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.443, -0.218, 0.0500071 });
}

inline
void olive(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.443, -0.218, 0.0500071 });
}

inline
void olive(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.443, -0.218, 0.0500071 });
}

}
}





namespace color {
namespace make {

inline
void orange(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x34;
}

inline
void orange(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x46d5;
}

inline
void orange(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff47abadu;
}

inline
void orange(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff47beaa45ae37ul;
}

inline
void orange(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.68055, -0.334898, 0.280259 });
}

inline
void orange(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.68055, -0.334898, 0.280259 });
}

inline
void orange(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.68055, -0.334898, 0.280259 });
}

}
}





namespace color {
namespace make {

inline
void purple(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x9;
}

inline
void purple(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x4086;
}

inline
void purple(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff412434u;
}

inline
void purple(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff41ea24f934dcul;
}

inline
void purple(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.2065, 0.144431, 0.257493 });
}

inline
void purple(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.2065, 0.144431, 0.257493 });
}

inline
void purple(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.2065, 0.144431, 0.257493 });
}

}
}






namespace color {
namespace make {

inline
void silver(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x5;
}

inline
void silver(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x17;
}

inline
void silver(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff0000bfu;
}

inline
void silver(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff00000000bffful;
}

inline
void silver(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.75, 0, 0 });
}

inline
void silver(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.75, 0, 0 });
}

inline
void silver(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.75, 0, 0 });
}

}
}





namespace color {
namespace make {

inline
void teal(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x2;
}

inline
void teal(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0xb44a;
}

inline
void teal(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xffb21259u;
}

inline
void teal(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffffb14812d559baul;
}

inline
void teal(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.3505, 0.0735689, -0.3075 });
}

inline
void teal(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.3505, 0.0735688, -0.3075 });
}

inline
void teal(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.3505, 0.0735688, -0.3075 });
}

}
}





namespace color {
namespace make {

inline
void violet(::color::_internal::model< color::category::yuv_uint8 > & color_parameter) {
	color_parameter.container() = 0x4;
}

inline
void violet(::color::_internal::model< color::category::yuv_uint16 > & color_parameter) {
	color_parameter.container() = 0x3475;
}

inline
void violet(::color::_internal::model< color::category::yuv_uint32 > & color_parameter) {
	color_parameter.container() = 0xff371faeu;
}

inline
void violet(::color::_internal::model< color::category::yuv_uint64 > & color_parameter) {
	color_parameter.container() = 0xffff37d51f51af49ul;
}

inline
void violet(::color::_internal::model< color::category::yuv_float > & color_parameter) {
	color_parameter.container() = std::array<float,3>({ 0.684722, 0.122342, 0.218112 });
}

inline
void violet(::color::_internal::model< color::category::yuv_double> & color_parameter) {
	color_parameter.container() = std::array<double,3>({ 0.684722, 0.122342, 0.218112 });
}

inline
void violet(::color::_internal::model< color::category::yuv_ldouble> & color_parameter) {
	color_parameter.container() = std::array<long double,3>({ 0.684722, 0.122342, 0.218112 });
}

}
}





namespace color {
namespace _internal {
namespace _privateYUV {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2yuv {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::bound<category_left_type> bound_left_trait_type;
	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type g = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(g));
		container_left_trait_type::template set<1>(left, bound_left_trait_type::template minimum<1>());
		container_left_trait_type::template set<2>(left, bound_left_trait_type::template minimum<2>());
	}
};
}

template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yuv_float,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_float,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_float,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_float,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_float,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_float,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_float,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yuv_double,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_double,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_double,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_double,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_double,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_double,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_double,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_float > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateYUV {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2yuv {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static float_type Wr = 0.299000;
		static float_type Wb = 0.114000;
		static float_type Wg = 1.0-Wr-Wb;
		static float_type Umax = 0.436;
		static float_type Vmax = 0.615;
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type y = Wr * r + Wg * g + Wb * b;
		float_type u = Umax * (b - y)/(1- Wb);
		float_type v = Vmax * (r - y)/(1- Wr);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(y));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(u));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(v));
	}
};

}

template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_float,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_float,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_double,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_double,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_yuv {
	typedef color::category::yuv_uint32 category_type;
};


template<> struct pick_yuv< std::uint8_t > {
	typedef ::color::category::yuv_uint8 category_type;
};
template<> struct pick_yuv< std::uint16_t > {
	typedef ::color::category::yuv_uint16 category_type;
};
template<> struct pick_yuv< std::uint32_t > {
	typedef ::color::category::yuv_uint32 category_type;
};
template<> struct pick_yuv< std::uint64_t > {
	typedef ::color::category::yuv_uint64 category_type;
};
template<> struct pick_yuv< float > {
	typedef ::color::category::yuv_float category_type;
};
template<> struct pick_yuv< double > {
	typedef ::color::category::yuv_double category_type;
};
template<> struct pick_yuv< long double > {
	typedef ::color::category::yuv_ldouble category_type;
};
}

template< typename type_name >
using yuv = color::_internal::model< typename color::_internal::pick_yuv< type_name >::category_type >;

}




namespace color {
namespace _internal {
namespace _privateRGB {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_yuv2rgb {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static float_type Wr = 0.299000;
		static float_type Wb = 0.114000;
		static float_type Wg = 1.0-Wr-Wb;
		static float_type Umax = 0.436;
		static float_type Vmax = 0.615;
		float_type y = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type u = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type v = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type r = y + v*((1-Wr)/Vmax);
		float_type g = y- u*(Wb*(1-Wb)/Umax/Wg) - v*(Wr*(1-Wr)/Vmax/Wg);
		float_type b = y+ u*((1-Wb)/Umax);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(r));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(g));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b));
	}
};

}

template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_float,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_float,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_float,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_double,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_double,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_double,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint8 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_float > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_float > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_double > {};
template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_rgb {
	typedef color::category::rgb_uint32 category_type;
};


template<> struct pick_rgb< std::uint8_t > {
	typedef ::color::category::rgb_uint8 category_type;
};
template<> struct pick_rgb< std::uint16_t > {
	typedef ::color::category::rgb_uint16 category_type;
};
template<> struct pick_rgb< std::uint32_t > {
	typedef ::color::category::rgb_uint32 category_type;
};
template<> struct pick_rgb< std::uint64_t > {
	typedef ::color::category::rgb_uint64 category_type;
};
template<> struct pick_rgb< float > {
	typedef ::color::category::rgb_float category_type;
};
template<> struct pick_rgb< double > {
	typedef ::color::category::rgb_double category_type;
};
template<> struct pick_rgb< long double > {
	typedef ::color::category::rgb_ldouble category_type;
};
}

template< typename type_name >
using rgb = color::_internal::model< typename color::_internal::pick_rgb< type_name >::category_type >;

}




namespace color {
namespace _internal {
namespace _privateHSV {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2hsv {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type lo = std::min<float_type>({r,g,b});
		float_type v = std::max<float_type>({r,g,b});
		float_type delta = v - lo;
		float_type h = 0;
		float_type s = 0;
		if((0 != v) && (0 != delta)) {
			s = delta / v;
			if(v == r) {
				h = (float_type(60)/float_type(360)) * (g - b) / delta + (g < b ? float_type(1) : float_type(0));
			}
			if(v == g) {
				h = (float_type(60)/float_type(360)) * (b - r) / delta + (float_type(120)/float_type(360));
			}
			if(v == b) {
				h = (float_type(60)/float_type(360)) * (r - g) / delta + (float_type(240)/float_type(360));
			}
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(h));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(s));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(v));
	}
};

}

template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_float,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_float,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_double,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_double,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_hsv {
	typedef color::category::hsv_uint32 category_type;
};


template<> struct pick_hsv< std::uint8_t > {
	typedef ::color::category::hsv_uint8 category_type;
};
template<> struct pick_hsv< std::uint16_t > {
	typedef ::color::category::hsv_uint16 category_type;
};
template<> struct pick_hsv< std::uint32_t > {
	typedef ::color::category::hsv_uint32 category_type;
};
template<> struct pick_hsv< std::uint64_t > {
	typedef ::color::category::hsv_uint64 category_type;
};
template<> struct pick_hsv< float > {
	typedef ::color::category::hsv_float category_type;
};
template<> struct pick_hsv< double > {
	typedef ::color::category::hsv_double category_type;
};
template<> struct pick_hsv< long double > {
	typedef ::color::category::hsv_ldouble category_type;
};
}

template< typename type_name >
using hsv = color::_internal::model< typename color::_internal::pick_hsv< type_name >::category_type >;

}


namespace color {
namespace _internal {
namespace _privateHSL {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_hsv2hsl {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type h = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type ss = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type v = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type l = v * (2-ss) / 2;
		float_type s = v*ss/(1- fabs(2 * l -1)) ;
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(h));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(s));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(l));
	}
};

}

template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint8,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint16,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint32,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_uint64,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::hsl_float,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_float,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_float,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_float,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_float,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_float,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_float,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_float,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::hsl_double,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_double,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_double,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_double,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_double,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_double,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_double,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_double,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_uint8 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_uint16 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_uint32 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_uint64 > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_float > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_float > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_double > : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_double > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::hsv_ldouble> : public ::color::_internal::_privateHSL::convert_hsv2hsl<::color::category::hsl_ldouble,::color::category::hsv_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateHSL {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2hsl {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		const float_type hi = std::max<float_type>({ r, g, b });
		const float_type lo = std::min<float_type>({ r, g, b });
		float_type delta = hi - lo;
		float_type h = 0;
		float_type s = 0;
		float_type l = (hi + lo) / float_type(2);
		if(0 != delta) {
			s = delta / (1 - fabs(2*l - 1));
			if(hi == r) {
				h = (float_type(60)/float_type(360)) * (g - b) / delta + (g < b ? float_type(1) : float_type(0));
			}
			if(hi == g) {
				h = (float_type(60)/float_type(360)) * (b - r) / delta + (float_type(120)/float_type(360));
			}
			if(hi == b) {
				h = (float_type(60)/float_type(360)) * (r - g) / delta + (float_type(240)/float_type(360));
			}
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(h));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(s));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(l));
	}
};

}

template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_float,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_float,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_double,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_double,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_hsl {
	typedef color::category::hsl_uint32 category_type;
};


template<> struct pick_hsl< std::uint8_t > {
	typedef ::color::category::hsl_uint8 category_type;
};
template<> struct pick_hsl< std::uint16_t > {
	typedef ::color::category::hsl_uint16 category_type;
};
template<> struct pick_hsl< std::uint32_t > {
	typedef ::color::category::hsl_uint32 category_type;
};
template<> struct pick_hsl< std::uint64_t > {
	typedef ::color::category::hsl_uint64 category_type;
};
template<> struct pick_hsl< float > {
	typedef ::color::category::hsl_float category_type;
};
template<> struct pick_hsl< double > {
	typedef ::color::category::hsl_double category_type;
};
template<> struct pick_hsl< long double > {
	typedef ::color::category::hsl_ldouble category_type;
};
}

template< typename type_name >
using hsl = color::_internal::model< typename color::_internal::pick_hsl< type_name >::category_type >;

}


namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_hsl2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,2>(container_right_trait_type::template get<2>(right)));
	}
};

}

template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_float,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_float,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_double,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_double,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint8 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_float > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_ldouble> {};


}
}







namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_hsv2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,2>(container_right_trait_type::template get<2>(right)));
	}
};

}

template< > struct convert<::color::category::gray_uint8,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint8,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint16,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint32,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_uint64,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_float,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_float,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_float,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_double,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_double,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_double,::color::category::hsv_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_uint8 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_uint16 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_uint32 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_uint64 > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_float > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_double > : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::hsv_ldouble> : public ::color::_internal::_privateGray::convert_hsv2gray<::color::category::gray_ldouble,::color::category::hsv_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::diverse< category_left_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type > normalize_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_name value =
			0.2126 * normalize_type::template process<0> (container_right_trait_type::template get<0>(right))
		+ 0.7152 * normalize_type::template process<1> (container_right_trait_type::template get<1>(right))
		+ 0.0722 * normalize_type::template process<2> (container_right_trait_type::template get<2>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(value));
	}
};

}

template< > struct convert<::color::category::gray_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_float,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_double,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateGray::convert_rgb2gray<::color::category::gray_ldouble,::color::category::rgb_ldouble> {};


}
}







namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_yiq2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
	}
};

}

template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_float,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_float,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_double,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_double,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint8 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_float > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_ldouble> {};


}
}







namespace color {
namespace _internal {
namespace _privateGray {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_yuv2gray {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
	}
};

}

template< > struct convert<::color::category::gray_uint8,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_uint8,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint8,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::gray_uint16,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_uint16,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint16,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::gray_uint32,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_uint32,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint32,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::gray_uint64,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_uint64,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_uint64,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::gray_float,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_float,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_float,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_float,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_float,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_float,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_float,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_float,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::gray_double,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_double,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_double,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_double,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_double,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_double,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_double,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_double,::color::category::yuv_ldouble> {};

template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_uint8 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_uint8 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_uint16 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_uint16 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_uint32 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_uint32 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_uint64 > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_uint64 > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_float > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_float > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_double > : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_double > {};
template< > struct convert<::color::category::gray_ldouble,::color::category::yuv_ldouble> : public ::color::_internal::_privateGray::convert_yuv2gray<::color::category::gray_ldouble,::color::category::yuv_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_gray {
	typedef color::category::gray_uint32 category_type;
};

template<> struct pick_gray< bool > {
	typedef ::color::category::gray_bool category_type;
};
template<> struct pick_gray< std::uint8_t > {
	typedef ::color::category::gray_uint8 category_type;
};
template<> struct pick_gray< std::uint16_t > {
	typedef ::color::category::gray_uint16 category_type;
};
template<> struct pick_gray< std::uint32_t > {
	typedef ::color::category::gray_uint32 category_type;
};
template<> struct pick_gray< std::uint64_t > {
	typedef ::color::category::gray_uint64 category_type;
};
template<> struct pick_gray< float > {
	typedef ::color::category::gray_float category_type;
};
template<> struct pick_gray< double > {
	typedef ::color::category::gray_double category_type;
};
template<> struct pick_gray< long double > {
	typedef ::color::category::gray_ldouble category_type;
};
}

template< typename type_name >
using gray = color::_internal::model< typename color::_internal::pick_gray< type_name >::category_type >;

}




namespace color {
namespace _internal {
namespace _privateCMYK {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2cmyk {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::bound<category_left_type> bound_left_trait_type;
	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::operation::_internal::invert< category_right_type > invert_type;
	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, bound_left_trait_type::template minimum<0>());
		container_left_trait_type::template set<1>(left, bound_left_trait_type::template minimum<1>());
		container_left_trait_type::template set<2>(left, bound_left_trait_type::template minimum<2>());
		container_left_trait_type::template set<3>(left, reformat_type::template process<3,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
	}
};

}

template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmyk_float,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_float,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_float,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmyk_double,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_double,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_double,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_float > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_double > : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateCMYK::convert_gray2cmyk<::color::category::cmyk_ldouble,::color::category::gray_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateCMYK {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_rgb2cmyk {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type r = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type g = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type b = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type k = float_type(1) - std::max({ r, g, b });
		float_type c;
		float_type m;
		float_type y;
		if(float_type(1) != k) {
			c = (1-r-k) / (1-k);
			m = (1-g-k) / (1-k);
			y = (1-b-k) / (1-k);
		} else {
			c = float_type(0);
			m = float_type(0);
			y = float_type(0);
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(c));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(m));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(y));
		container_left_trait_type::template set<3>(left, diverse_type::template process<3>(k));
	}
};

}

template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_float,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_float,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_double,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_double,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_cmyk {
	typedef color::category::cmyk_uint32 category_type;
};


template<> struct pick_cmyk< std::uint8_t > {
	typedef ::color::category::cmyk_uint8 category_type;
};
template<> struct pick_cmyk< std::uint16_t > {
	typedef ::color::category::cmyk_uint16 category_type;
};
template<> struct pick_cmyk< std::uint32_t > {
	typedef ::color::category::cmyk_uint32 category_type;
};
template<> struct pick_cmyk< std::uint64_t > {
	typedef ::color::category::cmyk_uint64 category_type;
};
template<> struct pick_cmyk< float > {
	typedef ::color::category::cmyk_float category_type;
};
template<> struct pick_cmyk< double > {
	typedef ::color::category::cmyk_double category_type;
};
template<> struct pick_cmyk< long double > {
	typedef ::color::category::cmyk_ldouble category_type;
};
}

template< typename type_name >
using cmyk = color::_internal::model< typename color::_internal::pick_cmyk< type_name >::category_type >;

}


namespace color {
namespace _internal {
namespace _privateCMY {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_cmyk2cmy {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::diverse< category_left_type, float_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		float_type cc = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		float_type cm = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		float_type cy = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		float_type ck = normalize_type::template process<3>(container_right_trait_type::template get<3>(right));
		float_type c = cc * (1-ck) + ck;
		float_type m = cm * (1-ck) + ck;
		float_type y = cy * (1-ck) + ck;
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(c));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(m));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(y));
	}
};

}

template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_float,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_float,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_float,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_double,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_double,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_double,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_ldouble> {};

template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint8 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint8 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint16 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint32 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint64 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_float > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_float > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_double > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_ldouble> {};


}
}










namespace color {
namespace _internal {
namespace _privateCMY {

template< typename category_left_name, typename category_right_name, typename float_name = double >
struct convert_gray2cmy {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef float_name float_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef ::color::operation::_internal::invert< category_right_type > invert_type;
	typedef ::color::_internal::reformat< category_left_type, category_right_type, float_type > reformat_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
	}
};
}

template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmy_float,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_float,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_float,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_float,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_float,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_float,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_float,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmy_double,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_double,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_double,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_double,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_double,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_double,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_double,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_ldouble> {};

template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint8 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint8 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint16 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint32 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint64 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_float > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_float > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_double > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_ldouble> {};


}
}








namespace color {
namespace _internal {
namespace _privateCMY {

template< typename category_left_name, typename category_right_name >
struct convert_rgb2cmy {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;

	typedef ::color::_internal::container<category_left_type> container_left_trait_type;
	typedef ::color::_internal::container<category_right_type> container_right_trait_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		typedef ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
		typedef ::color::operation::_internal::invert< category_right_type > invert_type;
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(invert_type::template component<1>(container_right_trait_type::template get<1>(right))));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(invert_type::template component<2>(container_right_trait_type::template get<2>(right))));
	}
};

}

template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint8,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint16,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint32,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_uint64,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmy_float,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_float,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_float,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_float,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmy_double,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_double,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_double,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_double,::color::category::rgb_ldouble> {};

template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_uint8 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_uint8 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_uint16 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_uint32 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_uint64 > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_float > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_float > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_double > {};
template< > struct convert<::color::category::cmy_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMY::convert_rgb2cmy<::color::category::cmy_ldouble,::color::category::rgb_ldouble> {};


}
}

namespace color {
namespace _internal {
template< typename type_name >
struct pick_cmy {
	typedef color::category::cmy_uint32 category_type;
};


template<> struct pick_cmy< std::uint8_t > {
	typedef ::color::category::cmy_uint8 category_type;
};
template<> struct pick_cmy< std::uint16_t > {
	typedef ::color::category::cmy_uint16 category_type;
};
template<> struct pick_cmy< std::uint32_t > {
	typedef ::color::category::cmy_uint32 category_type;
};
template<> struct pick_cmy< std::uint64_t > {
	typedef ::color::category::cmy_uint64 category_type;
};
template<> struct pick_cmy< float > {
	typedef ::color::category::cmy_float category_type;
};
template<> struct pick_cmy< double > {
	typedef ::color::category::cmy_double category_type;
};
template<> struct pick_cmy< long double > {
	typedef ::color::category::cmy_ldouble category_type;
};
}

template< typename type_name >
using cmy = color::_internal::model< typename color::_internal::pick_cmy< type_name >::category_type >;

}

using namespace ::color::operation::arithmetic;
using namespace ::color::operation::compare;
