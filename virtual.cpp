#include<iostream>

class widget{
	public:
		virtual void f() { std::cout << "widget f() " << std::endl; }
}
;
int main()
{
	widget w;
	w.f();
	//(*w.vptr[1])(&w);
}
