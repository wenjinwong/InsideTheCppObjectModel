template<class type>
class foo{
	public:
		foo(){}
		type val() {};
		void val(type v) {}
	private:
		type _val;
}
;

template<class type>
double foo<type>::bogus_member() { return this ->dbc;}
int main()
{
	;
}
