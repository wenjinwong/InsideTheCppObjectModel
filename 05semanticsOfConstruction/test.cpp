class base{
	public:
		int val;
		int v;
	//	virtual void f() {}
};

class derived1 :virtual base{
int va;
};

class derived2:virtual derived1{
	int jj;
};

class out : derived1, derived2{
	int aaaa;
};

int main()
{
	out d1, d2, d3;
	for(int i = 0; i < 100000000; i++)
	{
		d1 = d2;
		d2 = d3;
		d3 = d1;
	}
}
