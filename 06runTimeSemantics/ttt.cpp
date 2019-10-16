#include<stdlib.h>
#include<new>
class tea{
	public:
		int val;
		tea(){val = 8;}
};

class derived : public tea{
	public:
	int al;
	int ll;
	derived() {}
};

int main()
{
	tea *p =  (tea*)malloc(sizeof(tea));
	//p->tea();
	delete p;
	delete p;
	delete p;
	//tea *pt = new tea;
	//derived* pd = new derived;
	//void *pp = malloc(sizeof(derived));
	derived *d = new (pt) derived;


}
