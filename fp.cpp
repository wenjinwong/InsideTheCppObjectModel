#include<stdio.h>
class test{
	public :
	
		virtual void f() {}
		virtual int tst() {}
		void ff() {}
};

int main()
{
	void (test::*f) () = &test::f;
	test t;
	(t.*f)();

	printf("%p  ",&test::ff);
	printf("%p  ",&test::f);
	printf("%p  ",&test::tst);
}
