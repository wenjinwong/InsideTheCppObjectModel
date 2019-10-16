#include<iostream>

class foo{
	public:
		int val;
		foo *pnext;
};

int main()
{
	foo bar;
	std::cout << bar.val;
}
