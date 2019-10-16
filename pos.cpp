#include<iostream>

class point{
	public:
		~point() {}
		virtual void f() {}
	//private:
		int a, b, c;
};

int main()
{
	point p;
	//std::cout << &point::a << "   " << &point::c << std::endl;
	//std::cout << &p << "  " << &p.a;
	printf("&point::a = %p\n", &point::a);
	printf("&point::b = %p\n", &point::b);
	printf("&point::c = %p\n", &point::c);
}
