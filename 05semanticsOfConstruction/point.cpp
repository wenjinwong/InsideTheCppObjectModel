class point{
	public:
		point(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}
	private:
		float x, y, z;
};

//point p;
//point pp = {0,0,0};

class test{
	public:
		int val =5;
		int vala = 8;
		//test& operator=(test& rhs)
	//	{
	//		val = rhs.val;
	//		vala = rhs.vala;
	//		return *this;
	//	}
	
		virtual void f() {}
	private:
		//test& operator=(test& rhs);
};

int main()
{
	for(int i = 0; i < 100000000; i++)
	{
		test t;
		test t1;
		t1 = t;
	}

}
