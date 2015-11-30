#include "../src/color.hpp"
#include "../src/generic/operation/operation.hpp"




int main(int argc, char const *argv[])
{
	color::rgb_double d;
	color::rgb_float f;
	f.get(0);
	float ff = f[0];
	f.container();
	//color:rgb<float> f;
	//color:rgb<int>   i;
	color::operation::addition::full( f,f,f);
	color::operation::addition::accumulate( f, f);
	color::operation::invert::full( f,f);
	color::operation::invert::accumulate( f);
	f = d;
	return 0;
}