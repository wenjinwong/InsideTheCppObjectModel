#include<iostream>


class base{
	public:
		virtual ~base() { std::cout << "base" << std::endl;}
};

class base1 : virtual public base{
	public :
		virtual ~base1() { 
			std::cout << "base1" << std::endl;
		}
};

class base2 : virtual public base{
	public:
		virtual ~base2() { std::cout << "base2" << std::endl;}
};
class derived : public base1, public base2{
	public:
		base1 b;
		virtual ~derived() { std::cout << "derived" <<std::endl;}
};

int main()
{
	derived d;
	//d.f();
}
