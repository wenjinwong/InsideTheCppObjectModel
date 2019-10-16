#include<iostream>


class test{
	public:
		static int val;
		int a;
		void g() { val++; a++;}
		static void f() { val++;}
};

int test::val = 1;


int main()
{
	test::f();
	test t;
	t.g();
	std::cout << test::val << "  " ;
	auto ff = &test::f();
	ff();
}
