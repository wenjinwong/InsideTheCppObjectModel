#include<iostream>

class base{
	public:
		int& operator[] (int i) const {
			return val;
		}
		int val = 0;
		char *name = new char[11]{'1','2','3','4','5'};
};

int main()
{
	base b;
	b[4] = 'g';
	std::cout << b[4];
}
