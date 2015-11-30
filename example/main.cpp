#include "../src/color.hpp"



int main(int argc, char const *argv[])
{
	color::rgb_double d;
	color::rgb_float f;
	f.get(0);
	float ff = f[0];
	f.container();
	//color:rgb<float> f;
	//color:rgb<int>   i;
	f = d;
	return 0;
}