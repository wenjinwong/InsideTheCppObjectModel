#include<iostream>

class base{
	public:
		virtual void f() { std::cout << "base f() " << std::endl;}
};

class derived : public base{
	public:
		void f() { std::cout << "derived f() " << std::endl;}
};




int main()
{
	base* pb;
	base b;
	pb = &b;
	pb->f();
	derived d;
	pb = &d;
	pb->f();
}
