#include<iostream>
#include<cstdlib>
class point{
	public:
		int pub;
		int pri;
		point(int a, int b) : pub(a), pri(b) {};
};

template<class type, class type1, class type2>
char* access_order(type1 type::*mem1, type2 type::*mem2)
{
	//assert(mem1 != mem2);
	return mem1 < mem2 ? "member 1 occurs first" : "member 2 occurs first";
}

int main()
{
	int point::*pub = &point::pub;
	int point::*pri = &point::pub;
	point p(33,44);
	pub = &p.pub;
	//std::cout << access_order(&point::pub, &point::pri);
}
