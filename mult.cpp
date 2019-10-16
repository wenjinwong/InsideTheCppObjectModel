#include<iostream>

class base1{
	int i;
};
class base2:virtual base1{
	int j;
};

class base3 : virtual base1{
	int l;
};
class derived : base3, base2{
	public:
		int m;
};

class base4:base1{
	int s;
};
class base5:base1{
	int a;
};

class de:base4, base5{
	int o;
};

int main()
{
	std::cout << sizeof(derived) << "  " << sizeof(de);
}
