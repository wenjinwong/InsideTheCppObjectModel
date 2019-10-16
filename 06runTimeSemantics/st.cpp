#include<iostream>
#include<new>

struct base{int i; virtual void f() {std::cout << "base";}
};

struct derived:base{void f() {std::cout << "de";}};
int main()
{
	base b;
	new (&b) derived;
	b.f();
}
