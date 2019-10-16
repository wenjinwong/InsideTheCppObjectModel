#include<iostream>


class abstract_base{
	public:
		virtual ~abstract_base();
		inline virtual void interface() const = 0;
		const char* mumble() const {return _mumble;}
	//protected:
		abstract_base(char *p) : _mumble(p) {}
		char *_mumble,uu;
		int v;
};

abstract_base::~abstract_base(){};
class concrete_derived : public abstract_base {
	public:
		concrete_derived(char* p) : abstract_base(p) {}
		void f() { std::cout << "f() " << std::endl;}
		void interface() const { }
};

int main()
{
	char *p = new char('c');
	concrete_derived cd(p);
	cd.interface();
	std::cout << sizeof(abstract_base) ;
	printf("      %p  %p   %p   %p", &cd, &cd._mumble, &cd.uu, &cd.v);
}
