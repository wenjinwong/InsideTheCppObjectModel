int i;
int j = i;
int *pi = new int(i);

class obj{
	public:
		int val;
};

class obj1:obj{
	int a;
};

obj1 o;
obj *p;
p = &o;
p = new obj1;
int main()
{
	;
}
