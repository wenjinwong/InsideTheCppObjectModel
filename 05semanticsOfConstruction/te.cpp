class test{
	public:
		test(int val) : val(val) {}
		test() = default;
		int val;
};

int main()
{
	test t;
}
