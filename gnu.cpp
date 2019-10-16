#include<iostream>

class base{
	public:
		int setx(int val) { return val;}
		base(int val) : j(setx(val)), i(j){}
		int i;
		int j;

};

int main()
{
	base b(5);
}
