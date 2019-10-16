#include<iostream>

class one{
	public:
		int f() {};
		one() {x =0;}
		int x;
		int y;
};

one o;
int main()
{
	try{
	o.x = 5;
}
catch(...)
{
	;
}
one oo; 
	//	(*p )();
	// printf("&p   ", &oo.f);
	std::cout << o.x;
}
