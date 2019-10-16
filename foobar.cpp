#include<iostream>

class base{
	public:
		int val;
		base(int v) : val(v) { std::cout << "base: " << v << std::endl;
		}
};

class derived : public base{
	public:
		int fval(int f) { return f;}
		derived(int f): base(fval(f)) { std::cout << "derived" <<std::endl;}
};

int main()
{
	derived d(8);
}
