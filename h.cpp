#include<iostream>

class base{
	public:
		int val, val1;
		//double d;
};

class test{
	public:
		virtual void m() {};
};
class derived : public base, test{
	public:
		int v;
		virtual void f() { std::cout << "f()" <<std::endl;}
};

int main()
{
	base b;
	derived d;
	std::cout << &b << "  " << &d<< "  " << &d.val<< "  " << &d.val1 << "  " << &d.v<< std::endl;
}
