#include<iostream>

class base{
	public:
		int val;
		base(int v) : val(v) {std::cout << "base()";}
};


class d1: virtual public base{
	public:
		d1(int v) : base(v){}
};
//class d2: virtual public base{
//public:
//		d2(int v) : base(v) {}
//};

class dd : public d1{
	public:
		dd(int v) : base(v), d1(v) {
	//		base(5);
		}
};

int main()
{
	dd d(3);
}
