#include<iostream>

class base{
	public:
		int val = 99;
		virtual void size() { std::cout <<val<< "base" <<std::endl;}
		base() { size();}
};

class derived : protected base{
	public:
		int val = 999;
		virtual void size() { std::cout << val <<"derived" << std::endl;}
		derived(){size();}
};

int main()
{
	base* pb;
	derived d;
}
