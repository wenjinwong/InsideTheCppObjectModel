#include<iostream>


class y{
	public:
		int val;
		y(int v) : val(v) {}
		~y(){}
		bool operator==(const y& rhs) const { return val == rhs.val;}
};

class x{
	public:
		int val;
		x() { val = 5;}
		~x() {}
		operator y() const { return y(val);}
		x getValue() { return *this;}
};
int main()
{
	y yy(9);
	x xx;
	if(yy == xx)
		std::cout << "==";
	else
		std::cout << "!=";
}
