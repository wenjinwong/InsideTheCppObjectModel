class base{
	public :
		int val;
};

class derived : public base{
	public:
		int a ;
};
int main()
{
	base* p = new derived[100];
	delete [] p;

}
