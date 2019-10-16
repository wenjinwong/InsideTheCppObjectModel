#include<iostream>

class vir{
	virtual void f();
};

class x{int x;};
class y : public virtual x{};
class z : public virtual x{};
class a : public y, public z{};

class virr:virtual vir{
};
int main()
{
	std::cout << sizeof(x) << "  " << sizeof(y) << "  " << sizeof(z) << "   " << sizeof(a);
	std::cout <<"   " <<  sizeof(vir) <<"   " << sizeof(virr);
}
