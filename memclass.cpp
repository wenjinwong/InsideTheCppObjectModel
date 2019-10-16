#include<iostream>

class base{
	public:
		base()
		{
			val = 0;
		}
		int val;
};


class derived : public base {
	public:
		base b;
		int a;
		derived() { a = 1; }
};
int main() {
	derived d;
}
