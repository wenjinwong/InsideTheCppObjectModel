int a;
class test
{
	public:
		int val;
};


int main()
{
	test *p;
	test* t = new test;
	*p = *t;
}
