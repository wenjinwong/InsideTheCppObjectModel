#include<iostream>

class test{
	public:
		static int val;
};

int test::val = 5;
int main()
{
	test::val += 1;
	std::cout << test::val;
	test t;
	t.val ++;
	test().val = 5;
}
