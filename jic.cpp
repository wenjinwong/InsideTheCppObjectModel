#include<iostream>
class base{
	public:
		int i, j;
};

class base1 : virtual public  base{
	public:
};

class base2 : virtual public base1{
};

int main()
{
	base2 a, b, c;
	base* pa, pb, pc;
	pa = &a
	
	
	a.i = a.j = 0;
	b.i = b.j = 0;
	c.i = c.j = 0;

	for(int i = 0; i < 100000000000; ++i)
	{
		pa->i += 1;
		pa->j += 1;
	}
}
