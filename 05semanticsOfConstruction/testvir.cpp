#include<iostream>
class base{
public:
	virtual void f() {}
	int a;
};

class derived : public base{
	public:
int aa;
		virtual void e() {}
};

class test: public base
{
	public:
	int aa;
	void f() {}
	~test() { std::cout << "~";}
};

int main()
{
	test t;
	t.~test();
	std::cout << sizeof(base) << "   " << sizeof(derived) << "    " << sizeof(test);
}
