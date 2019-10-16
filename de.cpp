#include<iostream>


class base{
	public:
		int val;
};

class derived:virtual public base{
	public:
};

class d2: base{
};
int main()
{
	std::cout << sizeof(base) << "   " << sizeof(derived) << "  " << sizeof(d2) << std::endl;
}
