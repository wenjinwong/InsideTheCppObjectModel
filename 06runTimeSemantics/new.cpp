#include<new>
class test{
	public :
		int val;
};

int main()
{
	test *pt = new test;
	test tt;
	new (&tt) test;
}
