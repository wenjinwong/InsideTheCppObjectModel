#include<stdlib.h>

class test{
	public:
		test() {int i;}
};

try {
	int i = 0;
}catch(...)
{
	;
}
int main()
{
	void *p = malloc(sizeof(test));
	p = (test*)p;
}
